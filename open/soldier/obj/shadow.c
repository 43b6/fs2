#include <weapon.h>                           
#include <ansi.h>

inherit LANCE;
void create()
{           
           seteuid(getuid());
  set_name("ˮӰ",({"Water-shadow","shadow"}));
           set_weight(15000);
           if( clonep() )
 set_default_object(__FILE__);
           else {
                   set("unit", "��");
           set("long","��˵��ˮ��Ϊ�˴�ħ��ͷͷ�Ķ���,���Լ���Ѫ����һ��
           ǿ��ħ����,���ڽ���ﻨ�������ľ����������,�����ʱ�������ľ�ƣ
           ������ս,��ʹ��ȫ����ǹ����ȥ����ˮӰȥ��һλ�ܴ������˰�..,
           ...\n");
                   set("value",3500);
                   set("material", "gold");
           set("wield_msg", "$N����$n,��о����������$n������,ǹ������ǿ
           �ҵĹ⡣  .\n");
           set("unwield_msg", "$N����$n,$N�о����ɶ��ˡ�.\n");
           }
           init_lance(40);
           setup();
           }






