#include <weapon.h>                           
#include <ansi.h>

inherit LANCE;
void create()
{           
           seteuid(getuid());
           set_name(HIW"���컯�"NOR,({"Godmelt-lance","lance"}));
           set_weight(8000);    
           if( clonep() )
                   set_default_object(__FILE__);
           else {
                   set("unit","ֻ");
 set("long","����һ�����˳߼�����������ǹ.\n");
                   set("value",50000);
                   set("material", "silver");
           set("wield_msg", "$N����$n,��Ͳ��Ծ��ĺ�: ��....׳....��....��...
           $NͻȻ��������Ĵ�����.\n");
           set("unwield_msg", "$N����$n,���ǹ����Ž�����ʧ�ˡ�.\n");
           }
   init_lance(90);
           setup();
           }






