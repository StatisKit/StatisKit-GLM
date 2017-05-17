from functools import wraps

import _glm
from __glm.statiskit import(_FLink,
                            ScalarLink,
                                PoissonLink,
                                    PoissonCanonicalLink,
                                    PoissonVLink,
                                BinomialLink,
                                    BinomialCanonicalLink,
                                    BinomialFLink,
                                NegativeBinomialLink,
                                    NegativeBinomialCanonicalLink,
                                    NegativeBinomialULink,
                                    NegativeBinomialVLink,
                                VectorLink,
                                    NominalLink,
                                        NominalCanonicalLink,
                                        ReferenceLink,
                                    OrdinalLink,
                                        OrdinalCanonicalLink,
                                        AdjacentLink,
                                        CumulativeLink,
                                        SequentialLink)

__all__ = ['PoissonLink',
           'BinomialLink',
           'NegativeBinomialLink',
           'NominalLink',
           'OrdinalLink']


def FLink_decorator(cls):

    cls.distribution = property(cls.get_distribution, cls.set_distribution)
    del cls.get_distribution, cls.set_distribution

for cls in _FLink:
    FLink_decorator(cls)


def _link(link, mapping, **kwargs):
    try:
        link = mapping[link]()
    except KeyError:
        raise ValueError('\'link\' parameter, possible values are ' + ', '.join('"' + link + '"' for link in mapping.iterkeys()))
    except:
        raise
    for attr in kwargs.keys():
        if hasattr(link, attr):
            setattr(link, attr, kwargs.pop(attr))
        else:
            raise AttributeError("'" + link.__class__.__name__ + "' object has no attribute '" + attr + "'")
    else:
        return link


def PoissonLink(link='canonical', **kwargs): 
    """
    """
    return _link(link, dict(canonical = PoissonCanonicalLink,
                            V = PoissonVLink), **kwargs)

def BinomialLink(link='canonical', **kwargs): 
    """
    """
    return _link(link, dict(canonical = BinomialCanonicalLink,
                            F = BinomialFLink), **kwargs)

def NegativeBinomialLink(link='canonical', **kwargs): 
    """
    """
    return _link(link, dict(canonical = NegativeBinomialCanonicalLink,
                            U = NegativeBinomialULink,
                            V = NegativeBinomialVLink), **kwargs)

def _ratio(ratio, mapping, **kwargs):
    try:
        ratio = mapping[ratio]()
    except KeyError:
        raise ValueError('\'ratio\' parameter, possible values are ' + ', '.join('"' + ratio + '"' for ratio in mapping.iterkeys()))
    except:
        raise
    for attr in kwargs.keys():
        if hasattr(ratio, attr):
            setattr(ratio, attr, kwargs.pop(attr))
        else:
            raise AttributeError("'" + ratio.__class__.__name__ + "' object has no attribute '" + attr + "'")
    else:
        return ratio

def NominalLink(ratio='canonical', **kwargs):
    """
    """
    return _ratio(ratio, dict(canonical = NominalCanonicalLink,
                              reference = ReferenceLink), **kwargs)

def OrdinalLink(ratio='canonical', **kwargs):
    """
    """
    return _ratio(ratio, dict(canonical = OrdinalCanonicalLink,
                              adjacent = AdjacentLink,
                              cumulative = CumulativeLink,
                              sequential = SequentialLink), **kwargs)