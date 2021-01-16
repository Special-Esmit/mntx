#include <sys/mount.h>
#include <stdio.h>
int main()
{
printf("<$> Created By Special_Esmit Just For Fun :)\n");
printf("<$> Mount and Unmount Device\n");
printf("_________________________________________________");
int umn,mn,x,ct=250;
char type1[ct],mnu1[ct],mpoint1[ct],tdev1[ct];
const char* type=type1;
const char* mnu=mnu1;
const char* tdev=tdev1;
const char* mpoint=mpoint1;

printf("\n[0]Mount Device\n[1]Unmount Device\n<^>Enter Mode: ");
scanf("%d",&x);

if (x == 0)
{
	printf("<^> Example: ( Src Mount_Point Type )\n");
	printf("<^> Enter: ");
	scanf("%s %s %s",mnu1,mpoint1,type1);
	printf("<^> Source Device: %s | Mount Point: %s | Type: %s\n", mnu1,mpoint1,type1);
	mn = mount(mnu,mpoint, type, MS_MGC_VAL | MS_NOSUID, "");
	if (mn == 0)
	{
		printf("<^> [%s] Device Mounted To [%s]\n", mnu,mpoint);
	}
	else{
		printf("<!> Error In Mounting !\n");
	}
}
if(x == 1)
{
	printf("Enter Device: ");
	scanf("%s",tdev1);
	umn = umount(tdev);
	if (mn == 0)
	{
		printf("<^> Device Unmounted !\n", mnu,mpoint);
	}
	else{
		printf("<!> Error In Unmounting (Code: %s)!\n",umn);
	}
}
printf("_________________________________________________\n");
return 0;
}
