#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0f04f46caaca5507b653528fe3285f89()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_0f04f46caaca5507b653528fe3285f89("_LazyEstimation_0f04f46caaca5507b653528fe3285f89", "", boost::python::no_init);
    class_0f04f46caaca5507b653528fe3285f89.def(boost::python::init<  >(""));
    class_0f04f46caaca5507b653528fe3285f89.def(boost::python::init< class ::statiskit::glm::NominalRegression const * >(""));
    class_0f04f46caaca5507b653528fe3285f89.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Type >();
    }

}