#include <weapon.h>                           
#include <ansi.h>

inherit LANCE;
void create()
{           
           seteuid(getuid());
           set_name(HIB "ǧ�޻�" NOR,({"ghost lance","lance"}));
           set_weight(8000);
           if( clonep() )
                   set_default_object(__FILE__);
           else {
                   set("unit", "�� ");
           set("long","����ʮ����ǰĳ����ׯ,��ΪҪ����ǧ��Ѫ��,������ǧͷҰ��
          �Ļ���,�����ɵ�ħǹ .\n");
                   set("value",30000);
                   set("material", "gem");
           set("wield_msg", "$N������$n,��߶�ʱ������������ .\n");
           set("unwield_msg", "$N��$n��������,$n��ʱ������ʧ���Ρ�.\n");
           }
           init_lance(80);
           setup();
           }






