#include <weapon.h>
#include <combat.h>
#include <ansi.h>
inherit BLADE;
object ob=this_object();
void create()
{
        set_name(HIY"��������"NOR,({"fish blade","blade"}));
        set_weight(10000);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit","��");
          
set("long","�� "HIY"��������"NOR" ��,�˵��ഫ���Ƕ�孺����ɵ����ɱ�����\n");
          set("value", 10000);
          set("material","blacksteel");
        }
        set("wield_msg", "$N�ӱ���ĵ������ó�������\n");
        set("unwield_msg", "$N��"HIY"������"NOR"�Żر���ĵ���\n");
        init_blade(90);
        setup();
}
void init()
{
  set_heart_beat(1);
}
void heart_beat()
{
        int i,exp;
        object me=(environment(this_object()));
        object *enemy;
        if( me->is_fighting() && ob->query("equipped")=="wielded" )
        {
          enemy=me->query_enemy();
          i=random(sizeof(enemy));
          exp=me->query("combat_exp")-enemy[i]->query("combat_exp");
          if(exp<=0)    exp=5000;
          else          exp=5000+exp/10;
          if( random(exp) > random(20000) && random(5)==0 && me->query("kar")>random(30) )
          {
           if( me->query("force") > 25)
           {          
             message_vision("$N���һ��������ȫ����������"HIY"������"NOR"�У�"HIY"������"NOR"���������ĵ�â��\n"
                            "$N˳ʽʹ��ʹ��������������е��ؼ�"HIM"��"HIC"��"HIB"��"HIC"ɨ"HIB"��"HIC"��"HIB"��"HIC"��"HIM"��"NOR"!!\n",me,enemy[i]);
              message_vision("$n��$N�ĺ�ɨ���µĵ�����������\n",me,enemy[i]);
              COMBAT_D->report_status(enemy[i]);
              enemy[i]->receive_wound("kee",80);
              me->add("force",-25); 
           }
          }
        }
}       


