#include <weapon.h>
#include <ansi.h>
#include <combat.h>
inherit SWORD;
object ob;
void create()
{
set_name(HIR"�������ǽ�"NOR,({"Sad sword","sword"}) );
set_weight(9000);
if( clonep() )
set_default_object(__FILE__);
else {
set("unit", "��");
set("long",
"��˵�˽�Ϊ��ʦ�����������½������佣���͸����ֻ�������Ͽ�����ɫˮ��
���к�ɫ֮ʥ�����֣����˽�����������������һ�ɡ�\n");
set("value",10);
set("material", "steel");
set("wield_msg", "$N�γ�$n��˲ʱ�����ϵ���ɫˮ��ͻȻ����һ��ҫ�۵Ĺ⻪��˲��������������$Nȫ��\n");
set("unwield_msg", "$N������$n�ջ�����ʣ���ʱ������ʧ���١�\n");
set("weapon_prop/sword",5);
   set("no_drop", 1);
   set("no_give", 1);
   set("no_auc", 1);
   set("material", "blacksteel");

}
init_sword(70);
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
message_vision(HIW"$N"HIW"����"HIR"��������"HIW"��ֻ����ɫʥ�⻷����$N��ߡ�\n"NOR,this_player());
message_vision(HIC"$N�γ�"HIR"��������"HIC"��˲ʱ�����ϵ���ɫˮ��ͻȻ����һ��ҫ�۵Ĺ⻪��������������$Nȫ��\n"NOR,this_player());
       set_heart_beat(1);
     }
}
int do_unwield(string str)
{
if(query("equipped")) {
message_vision("$N��ʥ�����£���ɫʥ���ʱ��ʧ����....\n",this_player());
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
if( sword > random(100)) {
message_vision(HIW"�����ܵ�$N�������ٻ���������ʥ����ɫˮ��������⣬˲�����$N���ϵ��������ɽ�����ľ��棬�߶��������׵Ŀ�Ծ�ѧ\n"NOR,ob);
message_vision(HIW"\n$N���������ǣ����������������۳��Σ������ɼ���ֻ��$N˫�۷��죬���쳤Х...\n"NOR,ob);
message_vision(HIW"\n     ��"HIR"���졫�ء�����֤���䡫�֡�����ѧ---"HIC"��*��*��*��*��*��*��!!"HIW"��\n"NOR,ob);
message_vision(HIW"              #\n"NOR,ob);
message_vision(HIW"             #\n"NOR,ob);
message_vision(HIW"            ##       .\n"NOR,ob);
message_vision(HIW"           :##    /##+\n"NOR,ob);
message_vision(HIW"           ### H######## =#\n"NOR,ob);
message_vision(HIW"           ###############\n"NOR,ob);
message_vision(HIW"          #######;  =#####,\n"NOR,ob);
message_vision(HIW"          #######    .####:\n"NOR,ob);
message_vision(HIW"         ##:####      ####@ \n"NOR,ob);
message_vision(HIW"         #######      ####\n"NOR,ob);
message_vision(HIW"         #####        M##+\n"NOR,ob);
message_vision(HIW"         ###          M###      H\n"NOR,ob);
message_vision(HIW"         ##           ###      #/\n"NOR,ob);
message_vision(HIW"         #           M###     ## \n"NOR,ob);
message_vision(HIW"                     ###.    ###\n"NOR,ob);
message_vision(HIW"                     ##=   ####H \n"NOR,ob);
message_vision(HIW"                     ##.  @#####  # \n"NOR,ob);
message_vision(HIW"                    ###  @#########- \n"NOR,ob);
message_vision(HIW"                   ###H######M###### \n"NOR,ob);
message_vision(HIW"                  ########X $X   -###  \n"NOR,ob);
message_vision(HIW"                 #############/     @#% \n"NOR,ob);
message_vision(HIW"                #####:# #-####@      .+#\n"NOR,ob);
message_vision(HIW"              ###########:M ###/       ##%\n"NOR,ob);
message_vision(HIW"             #####  ,####    $##$       H## \n"NOR,ob);
message_vision(HIW"            ######    ##+      ##         ## \n"NOR,ob);
message_vision(HIW"          #####-       @#-      ##         H# \n"NOR,ob);
message_vision(HIW"         #######        ##%      #\n"NOR,ob);
message_vision(HIW"        ######@         ###@\n"NOR,ob);
message_vision(HIW"       #######            #H\n"NOR,ob);
message_vision(HIW"        #####,            ## \n"NOR,ob);
message_vision(HIW"       ######.            #/ \n"NOR,ob);
message_vision(HIW"      #######             % \n"NOR,ob);
message_vision(HIW"      #######\n"NOR,ob);
message_vision(HIW"      .####### \n"NOR,ob);
message_vision(HIW"      #######M@ \n"NOR,ob);
message_vision(HIW"      ########+ \n"NOR,ob);
message_vision(HIW"      ##H#####%@ \n"NOR,ob);
message_vision(HIW"       ###########\n"NOR,ob);
message_vision(HIW"         ############\n"NOR,ob);
message_vision(HIW"            ############\n"NOR,ob);
message_vision(HIW"                #########\n"NOR,ob);
message_vision(HIW"                  #### \n"NOR,ob);
message_vision(HIW"                      ####. \n"NOR,ob);
i=sizeof(enemy);
message_vision(HIW"$N�������������磬�������޹�������˲��ս�������е��˽����ش�!!\n"NOR,ob);

enemy=ob->query_enemy();
i=sizeof(enemy);
for(j=0;j<i;j++){
 enemy[j]->receive_damage("kee",200);
// enemy[j]->start_busy(2);
COMBAT_D->report_status(enemy[j],0);
}
}
}
return;
}
int query_autoload()
{
   return 1;
}

