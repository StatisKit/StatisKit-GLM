#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::BinomialRegression const volatile * get_pointer<class ::statiskit::glm::BinomialRegression const volatile >(class ::statiskit::glm::BinomialRegression const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_12cba5f08bca53ebb5d5e4782aeedbee()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  (::statiskit::glm::BinomialRegression::*method_pointer_8c0e2385f1c05e7e907ba3dfb56c4d67)() const = &::statiskit::glm::BinomialRegression::copy;
    boost::python::class_< class ::statiskit::glm::BinomialRegression, autowig::Held< class ::statiskit::glm::BinomialRegression >::Type, boost::python::bases< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::BinomialLink > > > class_12cba5f08bca53ebb5d5e4782aeedbee("BinomialRegression", "", boost::python::no_init);
    class_12cba5f08bca53ebb5d5e4782aeedbee.def(boost::python::init< unsigned int const &, class ::statiskit::ScalarPredictor const &, struct ::statiskit::BinomialLink const & >(""));
    class_12cba5f08bca53ebb5d5e4782aeedbee.def("copy", method_pointer_8c0e2385f1c05e7e907ba3dfb56c4d67, "");

    if(autowig::Held< class ::statiskit::glm::BinomialRegression >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::BinomialRegression >::Type, autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::BinomialLink > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::BinomialRegression >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::BinomialRegression, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::BinomialRegression >::Type, class ::statiskit::glm::BinomialRegression > > >();
    }

}