#include "_glm.h"



namespace autowig
{
    class Wrap_f12427e46b005b6bb8d9c8b21e6f49c0 : public ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator, public boost::python::wrapper< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > (result);
            }
                        

        protected:
            
            virtual class ::statiskit::glm::NominalRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, struct ::statiskit::MultivariateSampleSpace const & param_1, struct ::statiskit::UnivariateSampleSpace const & param_2) const
            { return this->get_override("build_estimated")(param_0, param_1, param_2); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_f12427e46b005b6bb8d9c8b21e6f49c0 const volatile * get_pointer<autowig::Wrap_f12427e46b005b6bb8d9c8b21e6f49c0 const volatile >(autowig::Wrap_f12427e46b005b6bb8d9c8b21e6f49c0 const volatile *c) { return c; }
    template <> class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile * get_pointer<class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile >(class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f12427e46b005b6bb8d9c8b21e6f49c0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_0576d5e3bac05b7fb807ca6f344e50e1 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__complete_regression_fisher_estimation_0576d5e3bac05b7fb807ca6f344e50e1");
    boost::python::object module_0576d5e3bac05b7fb807ca6f344e50e1(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_0576d5e3bac05b7fb807ca6f344e50e1.c_str()))));
    boost::python::scope().attr("__complete_regression_fisher_estimation_0576d5e3bac05b7fb807ca6f344e50e1") = module_0576d5e3bac05b7fb807ca6f344e50e1;
    boost::python::scope scope_0576d5e3bac05b7fb807ca6f344e50e1 = module_0576d5e3bac05b7fb807ca6f344e50e1;
    boost::python::class_< autowig::Wrap_f12427e46b005b6bb8d9c8b21e6f49c0, autowig::Held< autowig::Wrap_f12427e46b005b6bb8d9c8b21e6f49c0 >::Type, boost::python::bases< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >, boost::noncopyable > class_f12427e46b005b6bb8d9c8b21e6f49c0("Estimator", "", boost::python::no_init);

    if(autowig::Held< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_f12427e46b005b6bb8d9c8b21e6f49c0 >::Type, autowig::Held< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
    }

}