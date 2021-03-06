

#ifndef BOOST_SIMULATION_PDEVS_ATOMIC_HPP //You need to change ATOMIC by your model's name
#define BOOST_SIMULATION_PDEVS_ATOMIC_HPP //You need to change ATOMIC by your model's name

#include <math.h> 
#include <assert.h>
#include <memory>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <algorithm>
#include <limits>
#include <random>
#include <pthead.h>
#include <boost/simulation/pdevs/atomic.hpp>

//#include any other library you need

#include "../data_structures/message.hpp" //Path to your message structure file. If you follow the folder template and the template name, you do not need to change it.

using namespace boost::simulation::pdevs;
using namespace boost::simulation;
using namespace std;


/**
 * @class ATOMIC
*/

template<class TIME, class MSG>
class AtomicModelName : public pdevs::atomic<TIME, MSG>{ //CHANGE AtomicModelName TO THE NAME OF YOUR ATOMIC MODEL.
private:

  //DECLARE YOUR MODEL'S PARAMETRES
  
  /* example */
  // string id;
   

  
  //DECLARE YOUR MODEL'S STATE VARIABLES
  
  /* example */
  //bool state;
  //int packet;
  //int index;
  

public:

  /**
   * @constructor 
   */

  explicit AtomicModelName(/*PARAMETERS TO INITIALIZE THE MODEL AND THE STATE VARIABLES IF ANY*/ /*example: string ID*/) noexcept {   //CHANGE AtomicModelName TO THE NAME OF YOUR ATOMIC
    
    //INITIALIZE THE MODEL PARAMETERS AND VARIABLES. YOU CAN USE THE PARAMETERS IN THE CONSTRUCTOR, IF ANY
    /* example*/
    //id              = ID;
    //state           = 0;
    //packet          = -8;
    //index           = 0;
    
  }

  /**
   * @Internal
   */

  void internal() noexcept {  
    
    //DEFINE YOU INTERNAL FUNCTION HERE 
  }

  /**
   * @advance
   */

  TIME advance() const noexcept { 
    TIME next_internal;
    
    //DEFINE YOUR TIME ADVANCE FUNCTION HERE
    //WARNING: IT CANNOT MODIFY ANY OF THE STATE VARIABLES OF THE MODEL. IT IS AGAINTS DEVS FORMALISM. THE MODEL WILL NOT COMPILE

    return next_internal;
  }

  /**
   *@output
   */

  vector<MSG> out() const noexcept {    
    vector<MSG> out_put;
    //DEFINE YOUR OUTPUT FUNCTION HERE
    //WARNING: IT CANNOT MODIFY ANY OF THE STATE VARIABLES OF THE MODEL. IT IS AGAINTS DEVS FORMALISM. THE MODEL WILL NOT COMPILE
    return out_put;
  }

  /**
   *@external
   */

  void external(const std::vector<MSG>& mb, const TIME& t) noexcept {    
     //DEFINE YOU EXTERNAL FUNCTION HERE
     //WARINING: YOU RECEIVE A VECTOR OF MESSAGES. THERE CAN BE MORE THAN ONE AT THE SAME TIME.
  }

  /**
   * @confluence 
  */

  virtual void confluence(const std::vector<MSG>& mb, const TIME& t) noexcept {
    //DEFINE YOUR CONFLUENCE FUNCTION HERE
    //THIS FUNCTION DEFINES WHAT HAPPENS WHEN THE INTERNAL AND THE EXTERNAL ARE SCHEDULLED FOR THE SAME TIME
    //WARINING: YOU RECEIVE A VECTOR OF MESSAGES. THERE CAN BE MORE THAN ONE AT THE SAME TIME.
  }
};

#endif // BOOST_SIMULATION_PDEVS_ATOMIC_HPP //You need to change ATOMIC by your model's name
