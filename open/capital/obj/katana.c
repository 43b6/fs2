#include <weapon.h>
 inherit BLADE;
void create()
{
      set_name("��ʿ��",({"katana"}));
      
      set_weight(8000);
	
	if( clonep() )
		set_default_object(__FILE__);
	else {
        set("unit","��");
        set("long", "�����ձ���ʿ�ǹ��õ��������������л��ȣ�������ҫ����â��\n") ;
	set("value", 400);
 	set("material","steel");	
        set("wield_msg","$N����΢�䣬��ৡ���һ���������ʼ�γ�һ����ʿ����\n");
        set("unwield_msg","$N����ʿ���ջص����ڡ�\n");
	}
  
   	init_blade(20);
	setup();
}
