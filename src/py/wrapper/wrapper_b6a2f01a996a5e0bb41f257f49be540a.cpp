#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator const volatile * get_pointer<class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator const volatile >(class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b6a2f01a996a5e0bb41f257f49be540a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_df1c8578972953bab4caa1c06601b32e = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__nominal_regression_fisher_estimation_df1c8578972953bab4caa1c06601b32e");
    boost::python::object module_df1c8578972953bab4caa1c06601b32e(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_df1c8578972953bab4caa1c06601b32e.c_str()))));
    boost::python::scope().attr("__nominal_regression_fisher_estimation_df1c8578972953bab4caa1c06601b32e") = module_df1c8578972953bab4caa1c06601b32e;
    boost::python::scope scope_df1c8578972953bab4caa1c06601b32e = module_df1c8578972953bab4caa1c06601b32e;
    boost::python::class_< class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, autowig::Held< class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > > > class_b6a2f01a996a5e0bb41f257f49be540a("Estimator", "", boost::python::no_init);
    class_b6a2f01a996a5e0bb41f257f49be540a.def(boost::python::init<  >(""));
    class_b6a2f01a996a5e0bb41f257f49be540a.def(boost::python::init< class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > >::Type >();
    }

}