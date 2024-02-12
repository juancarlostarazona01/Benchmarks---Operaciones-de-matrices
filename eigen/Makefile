GCC = g++

oC = -std=c++11

oT = -O3 -lpthread -lX11

CFLAGS = `pkg-config --cflags --libs dlib-1`

PROGRAMAS = 3d_point_cloud_ex bayes_net_ex eigen01 eigen02 eigen03 eigen04 operacionesBasicas demostracion 

all: $(PROGRAMAS)

clean:
	$(RM) $(PROGRAMAS)
	
3d_point_cloud_ex:
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@
	
bayes_net_ex:						
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@
	
eigen01:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@	
	
eigen02:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@		
	
eigen03:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@			
	
eigen04:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@
		
operacionesBasicas:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@
	
demostracion:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@	
