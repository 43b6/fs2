#include <weapon.h>                           
#include <ansi.h>

inherit LANCE;
void create()
{           
           seteuid(getuid());
           set_name("����Ǭ��ǹ",({"universe_lance","lance"}));
           set_weight(2000);
           if( clonep() )
                   set_default_object(__FILE__);
           else {
                   set("unit", "��");
           set("long","����һ�������ޱȵ��������.\n");
                   set("value",40000);
                   set("material", "gold");
           set("wield_msg", "$N����һ��$n˲��ɳ�,��������$n�����о���������
            ������ .\n");
           set("unwield_msg", "$N��$n�������ȥ,��ʱ$n��ʧ����.\n");
           }
           init_lance(60);
           setup();
           }






