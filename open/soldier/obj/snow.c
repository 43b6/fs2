#include <weapon.h>                           
#include <ansi.h>

inherit LANCE;
void create()
{           
           seteuid(getuid());
           set_name(HIW "ǧ��ѩ" NOR,({"meter-snow","snow"}));
           set_weight(6000);
           if( clonep() )
     set_default_object(__FILE__);
           else {
                   set("unit", "��");
           set("long","��һ��ǹ�ഫ����һλס����ɽ������,����ɽ�����������
           ���� .\n");
                   set("value",20000);
                   set("material", "gem");
           set("wield_msg", "$N������$n,��ʱȫ��һ�󺮱�¤����ȫ�� .\n");
           set("unwield_msg", "$N�㽫$n����ǹ����,$n��ʱ�����������˶�ȥ��.\n");
           }
           init_lance(80);
           setup();
           }






