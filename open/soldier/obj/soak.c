#include <weapon.h>                           
#include <ansi.h>

inherit LANCE;
void create()
{           
           seteuid(getuid());
           set_name("�겻մ",({"rainno-soak","soak","rainno"}));
           set_weight(5000);
           if( clonep() )
                   set_default_object(__FILE__);
           else {
                   set("unit", "��");
           set("long","����Ƥ����һ���������,�׵罻�ӵ�ҹ��,��������ɵĳ�ǹ .\n");
                   set("value",10000);
                   set("material", "blacksteel");
           set("wield_msg", "$N��������$n,��Ȼ�������,ͻȻ�����$n��һ�����ɶ�
           �õĺñ��� �� .\n");
           set("unwield_msg", "$N��$n��������,$N�о�$n˿��û�а��Ѫ�������档.\n");
           }
           init_lance(75);
           setup();
           }






