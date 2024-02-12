GCC = g++

oC = -std=c++11

oT = -O3 -lpthread -lX11

CFLAGS = `pkg-config --cflags --libs dlib-1`

PROGRAMAS = 3d_point_cloud_ex bayes_net_ex eigen05 operacionesBasicas demostracion inversa potencia fabrica ecuacionesIncognita

all: $(PROGRAMAS)

clean:
	$(RM) $(PROGRAMAS)
	
3d_point_cloud_ex:
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@
	
bayes_net_ex:						
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@

eigen05:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@	
		
operacionesBasicas:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@
	
demostracion:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@	

inversa:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@	

potencia:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@	

fabrica:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@	

ecuacionesIncognita:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@

sistemaEcuaciones:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@	

rango:				
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $@				
