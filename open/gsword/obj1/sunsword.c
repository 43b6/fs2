#include <weapon.h>
#include <ansi.h>
#include <combat.h>
inherit SWORD;
object ob;
void create()
{
set_name("[1;31m�����潣[0m",({"sevensun_sword","sword"}) );
set_weight(9000);
if( clonep() )
set_default_object(__FILE__);
else {
set("unit", "��");
set("long",
"��˵�˽�Ϊ��ԯ���ɵ��佣���佣���͸����ֻ��������������ɫ����
���к�ɫ֮ʥ�����֣����˽�����������������һ�ɡ�\n");
set("value",10);
set("material", "crimsonsteel");
set("rigidity",200);
       set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
       set("no_drop",1);
        set("no_get",1);
set("wield_msg", "$N�γ�$n,��˲ʱ�����ϵ���ɫ����ͻȻ������ɫ�⻪��ʹ�˾���Ϊ֮һ��\n");
set("unwield_msg", "$N������$n�ջ�����ʣ���ʱ��ɫ�����ʧ���١�\n");
set("weapon_prop/sword",10);
}
init_sword(99);
setup();
}
void init()
{
     add_action("do_wield","wield");
     add_action("do_unwield","unwield");
}
int do_wield(string str)
  {
 ::wield();
   if(query("equipped"))
{
ob=this_player();
message_vision("$N����[1;37m�ɽ�[1;31m����[0m��ֻ����ɫʥ�⻷����$N��ߡ�\n",this_player());
       set_heart_beat(1);
     }
}
int do_unwield(string str)
{
if(query("equipped")) {
message_vision("$N���ɽ��������£���ɫʥ���ʱ��ʧ����....\n",this_player());
        set_heart_beat(0);
}
}
void heart_beat()
{
  object *enemy;
object victim;
  int i,j,sword;
  sword=ob->query_skill("sword",1)/5;
if ( !objectp(ob) )
        {
        set_heart_beat(0);
        return;
        }

if( ob->is_fighting() && query("equipped") )
{
if( sword > random(100) ) {
message_vision(HIW"�����ܵ�$N�������ٻ���������ʥ����ɫ������֮�߽�����ֱ��ɽ��б���ܳ�\n����$N�ľ������\���ɽ�����֮���ϰ���������ֻ��\n"HIR"$N���쳤Х���߶�����������ʹ���������׵��ɽ�������������\n"NOR,ob);
message_vision(HIW"\n\t\t��"HIR"�������ϡ����������ߡ�����ն"HIW"��\n\n"NOR,ob);
message_vision(HIR"����һ�������춯�أ���˵���ɽ�����������δ��ʹ�ù�!!\n"NOR,ob);
message_vision(HIB"\n��������������𣬿������дǣ�ʹ���ɽ�����֮�����߾���һʽ"HIW"��"HIB"����"HIW"��"HIB"!!\n"NOR ,ob);
message_vision(HIR"\n��������������𣬿������дǣ�ʹ���ɽ�����֮�����߾��ڶ�ʽ"HIW"��"HIR"����"HIW"��"HIR"!!\n"NOR ,ob);
message_vision(HIW"\n��������������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��������!!\n"NOR,ob);
message_vision(HIM"\nů������������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��"HIM"ů��"HIW"��"HIM"!!\n"NOR ,ob);
message_vision(HIC"\n��������������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��"HIC"����"HIW"��"HIC"!!\n"NOR ,ob);
message_vision(HIG"\n��������������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��"HIG"����"HIW"��"HIG"!!\n"NOR ,ob);
message_vision(HIY"\nϦ������������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��"HIY"Ϧ��"HIW"��"HIY"!!\n"NOR ,ob);
message_vision(HIW"\n�ߵ�����ͬʱ���ն��������������족�ڿ���֯��һ��������\n"HIG"�������$N����һԾ������׼���������һʽ������⾪��ض���һ����\n"NOR,ob);
message_vision(HIW"\nֻ��$N�������� ,���һ����"HIR"��Ӱ�������������졯!!\n"NOR,ob);
message_vision(HIW"$N�����������������磬��������ǰ�ɽ�����֮�����߾����߹ɸ��Ტ�õĽ���\nֻ������Х�죬���콣Ӱ�����ڵ��˽����ش�\n"NOR,ob);

enemy=ob->query_enemy();
i=sizeof(enemy);
for(j=0;j<i;j++){
 enemy[j]->receive_damage("kee",500);
 enemy[j]->start_busy(2);

COMBAT_D->report_status(enemy[j],0);
}
}
}
return;
}
