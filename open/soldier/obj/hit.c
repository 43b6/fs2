#include <weapon.h>                           
#include <ansi.h>

inherit LANCE;
void create()
{           
           seteuid(getuid());
           set_name("����",({"dragon hit","hit"}));
           set_weight(7500);
           if( clonep() )
                   set_default_object(__FILE__);
           else {
    set("unit","��");
           set("long","���ǰ��ɻƽ����������Ƭ,���Ƴɵ�սì\n");
                   set("value",70000);
                   set("material", "gold");
           set("wield_msg", "$N��ӳ�����ȡ����$n,������һ�ɼ���֮����������
           ,�������������١�\n");
           set("unwield_msg", "$N��$n��������,����֮˲������ʧ���١�\n");
           }
           init_lance(70);
           setup();
           }






