#include <weapon.h>                           
#include <ansi.h>
inherit LANCE;
void create()
{           
           seteuid(getuid());
set_name(HIG"�ɰ���ì"NOR,({"Meter-snake","meter","snake"}));
           set_weight(10000);
           if( clonep() )
   set_default_object(__FILE__);
           else {
                   set("unit","ֻ");
        set("long","�����ŷɴ���һ������,��ȡ���߹��������ĳ�ì.\n");
                   set("value",2000);
                   set("material", "silver");
           set("wield_msg", "$N����$n,�����е��һ������,�·��ֱ���챻�Ŷ��ˡ�.\n");
           set("unwield_msg", "$N����$n,��·����ǧ�Ͻ��ʯ,����¶���ƻ���
Ц��.\n");
           }
           init_lance(100);
           setup();
           }






