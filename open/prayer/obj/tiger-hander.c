#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
     set_name( "���ƴ�",({"tiger-hander","hander"}) );
     set_weight(11000);
     if( clonep() ) 
            set_default_object(__FILE__);
     else {
            set("long","ͽ���������������ִ�������״������������, �������ϳ�
	    ����ǿ������֮�⣬������ʹ����ս���м��ص��˵����ơ�\n");
            set("unit", "��");             
            set("value",6000);
            set("material","steel");
            }
            init_unarmed(20);
 
          setup();
}                   