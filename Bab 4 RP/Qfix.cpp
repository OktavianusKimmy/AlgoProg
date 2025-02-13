#include <stdio.h>

int main(){
	float jmlHlm, dituju, swipe = 0;
	int t;
	scanf("%d", &t);
	for(int i = 1; i<=t; i++){
		scanf("%f %f", &jmlHlm, &dituju);
		
		float count = dituju/jmlHlm;
		if(count <= 0.5){
			//mulai dari depan
			if(dituju == 1){
				printf("Case #%d: 0\n", i);
			}
			else{
				for(int a = 2; a<=dituju; a++){
					if(a%2 == 0){
						swipe++;
					}
				}
				printf("Case #%d: %.0f\n", i, swipe);
			}
		}
		else{
			if(dituju == jmlHlm){
				printf("Case #%d: 0\n", i);
			}
			else{
				for(int a = jmlHlm-1; a>=dituju; a--){
					if(a%2 != 0){
						swipe++;
					}
				}
				printf("Case #%d: %.0f\n", i, swipe);
			}
		}
		swipe = 0;
	}
	return 0;
}

