
std::vector<double> createRange(double start, double end, double step)

double binary_search(const std::vector<double>& b, 
                            double apogee, 
                            double err,
                            std::vector<double> states, 
                            std::function<double(double)> forwardIntegrate)
                            
std::vector<double> generateRampingFunction(double duration, double b, double f, double timestep)

double find_u(std::vector<double> states, double apogee, double err, 
			  std::function<double(double)> forwardIntegrate)