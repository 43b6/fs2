//tunsword Ѹ�׽� by roger
//��ѧ��Ѹ�׽����ſ�ʩչ ( set("quest/tunder_sword",1) )
//�����,���չ�����ħ��exp 300��,so ǿ�����޷�
//�� en sword none so ����������½�,���Թ���������
// weapon����Ϊ80��Ϊ����������׼Ϊ115
// QC by Anmy 3/3/98
#include <weapon.h>
#include <ansi.h>

inherit SWORD;


string *parry_msg=({
        HIC"$n�Կ��ƿ�,�п�$n����,˲��֯��һ�����������о�������!\n"NOR,
        
        HIC"$n��ս����,һ�����ı���ײ������,$n�ѽ�$N�Ŀ���ȫ������!\n"NOR,
        });

mapping *action = ({
([ "action" : HIW"$Nʹ��Ѹ�׽�����һʽ"HIB"�������ơ�"HIW",���е�$w"HIW"�����趯��,Ю���������Ϯ������,һʱ�佣���ݺ�"NOR,
        "dodge":   -20,
        "parry":   -20,
        "damage":   80,
        "force":    50,
        "damage_type" : "����",
]),

([ "action" : HIW"$N����$w"HIW"ͻȻ���˾���,ʹ��Ѹ�׽����ڶ�ʽ"HIB"���չ�������"HIW",����$w"HIW"������������������ܵĵ��� "NOR,
        "dodge":    40,
        "parry":    80,
        "damage":   80,
        "force":    50,
        "damage_type" : "����",
]),

([ "action" :HIW"$N����$w"HIW"���ٲ���,˲�����콣������,����Ѹ�׽�������ʽ"HIB"����Ӣ�ͷס�"HIW",��������,ֻ�����˵�Ѫ���仨��ɽ�..."NOR,
        "dodge":    40,
        "parry":    80,
        "damage":   80,
        "force":    50,
        "damage_type" : "����",
]),

([ "action" : HIW"$N���μ���,ʹ��Ѹ�׽�������ʽ"HIB"�����ɨҶʽ��"HIW",ֻ�����ܾ��������ɳ,����������$N�ںη�..."NOR,
        "dodge":     40,
        "parry":    80,
        "damage":   80,
        "force":    50,
        "damage_type" : "����",
]),

([ "action" : HIW"$N���󽣾�,��Ȼ���е�$w"HIW"����շ�ȥ,˲ʱ�������������¼���,����Ѹ�׽�������ʽ"HIB"���׺����졯"NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "����",
]),

([ "action" : HIW"$Nʹ��Ѹ�׽�������ʽ"HIB"����������"HIW"��������һ��������������,��ɢ������������ϢϮ������,����Ҫһ����û�����Ƶ�"NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "����",
]),

([ "action" : HIW"$N���һ��,ʹ��Ѹ�׽�������ʽ"HIB"���������ǡ�"HIW",һ˲���������ܴ̳���������ʮ�Ž�!"NOR,
        "dodge":   45,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "����",
]),

([ "action" : HIW"$N���е�$w"HIW"��������,һ��Ѹ�׽����ڰ�ʽ"HIB"���׵罻����"HIW"ʹ������,����������¡\¡\��\��\!"NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "����",
]),

([ "action" : HIW"$N���е�$w"HIW"��â��Ȼһ��,ʹ��Ѹ�׽����ھ�ʽ"HIB"�����籩�ꡯ"HIW",ֻ����â��ͣ��������˸,�����ۻ����Ҽ�$w"HIW"�Ѵ������..."NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "����֮��",
]),

([ "action" : HIW"$Nʹ�������Ṧ,һ��Ѹ�׽�����ʮʽ"HIB"���������С�"HIW"ʹ������,��Χ���˷׷ײ�ס�ص���..."NOR,
        "dodge":   80,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "����",
]),

([ "action" : HIW"$N����һ��,����$w"HIW"�����������׷���ȥ,����Ѹ�׽�����ʮһʽ"HIB"����Ӱ���Ρ�"HIW"����˱��޿ɱ�"NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "����",
]),

([ "action" : HIW"$N���е�$w"HIW"��Ȼ�����������,����ȥ�ƹ���Ī��,����Ѹ�׽�����ʮ��ʽ"HIB"����ָ�ὣ��"HIW"������޴��м���"NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "����",
]),

([ "action" : HIW"$N���е�$w"HIW"�������,ʹ��Ѹ�׽�����ʮ��ʽ"HIB"�������ɷ硯"HIW"ֻ��$w"HIW"��$N˫�������Ŀ������Լ��ߵ��ٶȴ�����Χ�ĵ��ˡ�"NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "����",
]),

([ "action" : HIW"$Nʹ��Ѹ�׽�����ʮ��ʽ"HIB"���ý�ʽ��"HIW",���е�$w"HIW"��Ȼ�ɿ���趯,�γ�һ������Ӱ������Χ�ĵ��ˡ�"NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "����",
]),

([ "action" : HIW"$N���е�$w"HIW"����һ��,��Ȼ���ɳ�ǧ����Ļ�Ӱ���������ܵĵ���,����Ѹ�׽�����ʮ��ʽ"HIB"����Ӱʽ��"HIW",��Χ���˷׷���ȴ..."NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   120,
        "force":    70,
        "damage_type" : "����",
]),

([ "action" : HIW"$N�����е�$w��ø���,ʹ��Ѹ�׽�����ʮ��ʽ"HIB"������ʽ��"HIW",���������������Ӱ��������ֻ��һ���Һ�$n�ѱ�����!��"NOR,
        "dodge":    40,
        "parry":   80,
        "damage":   130,
        "force":    80,
        "damage_type" : "����",
]), 

([ "action" : HIW"$Nʹ��Ѹ�׽���֮��"HIB"���ɻ÷��桯"HIW",����֮��,��ʽ֮��,ʵ�����˷�����˼,���̳���ÿһ�н�������ܵ��ش�"NOR,
        "dodge":    40,
        "parry":   80,
        "damage":   150,
        "force":    80,
        "damage_type" : HIB"Ѹ�׽���"NOR,
]),

});

void create()
{
   seteuid(getuid());
   set_name(HIB"Ѹ�׽�"NOR,({"thunder_sword"}));
   set_weight(100);
   init_sword(115);
   if( clonep() )
      set_default_object(__FILE__);
   else
   {
      set("unit", "��");
    //set("wield_as", ({ "sword", "secondhand sword" }));
      set("long","
Ѹ�׽�,�������ɫ,�������Ͳ��ʽ�ǡ���ô�,����������������Գ�����Ѹ��
�����֡�������ǡ���ô�������������,�����Է���Ѹ�׽���֮����,Ҳ���Գ���
Ѹ�׽�����������
");
      set("value",200000);
      set("no_auc",1);
      set("no_give",1);
      set("no_sell",1);
      set("no_drop",1);
      set("material", "crimsonsteel");
   }
   set("actions", (: __FILE__, "query_action" :) );
   //set("default_actions", (: call_other, __FILE__,"query_action" :));
   setup();
}

void init()
{
     add_action("doo_wield","wield");
     add_action("doo_unwield","unwield");
}

int doo_wield(string str)
{
    object me;
    me=this_player();
    if(str=="all")
    return 1;

    else if(str!="thunder_sword")
    return 1;

    else if(!me->query("quest/tunder_sword",1)) {
    tell_object(me,"��û��ѧ��Ѹ�׽������޷���Ԧ�˽���\n");
    return 1;
                                           }
    else if(me->query("class")!="swordsman")    { 
    tell_object(me,"���ְҵ���ǽ�ʿ�������ý�?\n");
    return 1;
                                           }
    else if(me->query_skill("sword",1) < 95)    {
    tell_object(me,"��Ļ��������������޷���Ԧ�˽���\n");
    return 1;
                                           }
    else {
    message_vision("$N����һ��,�ѽ����������"HIB"Ѹ�׽�"NOR"�������ݵ��������С�\n",me);
    tell_object(me,"ʹ��Ѹ�׽��Ͳ���ʹ����������(en sword none)\n"); 
    return 0; 
         }   
}

int doo_unwield(string str)
{
    object me;
    me=this_player();
    if(str == "tunder_sword" || str=="sword" || str=="all")
    message_vision("$Nһ������,���е�"HIB"Ѹ�׽�"NOR"ɲʱ���һ���ལ,$N˳�ư����������䡣\n",me);
    me->unwield_tunder_sword();
}                       

string query_parry_msg(string limb)
{
   return parry_msg[ random( sizeof( parry_msg))];
}


mapping query_action(object me, object weapon)
{
        mapping do_action;
        string arg;
        mixed all;
        object *enemy,who,room,weaponn,obj;
        string actionn;
        int i, j, k, gin, kee,sen,force,turn,l;
        force=me->query("force");
        gin=me->query("gin");
        sen=me->query("sen");
        turn=(force/100)+(gin/30)+(sen/30);
        if(turn >20) turn =20;
        if( random(4) == 0 && me->query("sen") > 40 && me->query("gin") > 40 && me->query("force") > 300) {
            enemy = me->query_enemy();
              for(i=0; i<sizeof(enemy); i++) {
                for(j=0; j<turn; j++) {
                    
                    do_action = action[random(sizeof(action))];
                    actionn = "\n";
                    actionn += do_action["action"];
		    if( weaponn=me->query_temp("weapon") )
                        actionn = replace_string(actionn, "$w", weaponn->name());
                    message_vision(actionn, me, enemy[i]);
                    if( random(me->query("combat_exp")) >
                        random(enemy[i]->query("combat_exp"))/5 ) {
                        message_vision("\n$N���㲻��, ����һ��������Ҫ����\n" , enemy[i]);
                        enemy[i]->receive_damage("kee",80,me);
                        enemy[i]->add("eff_kee",-30);
                        me->add("force",-12);
                        COMBAT_D->report_status(enemy[i]);
                                                                   }
                    else message_vision("\n$N�˱Ƚ���, ���յ���������һ�С�\n" , enemy[i]);
                                        }
                                              }
            if( random(me->query("cps")) < 4 ) {
                me->add("sen", -30);
                me->add("gin",-30);
                me->add("force",-200);
                tell_object(me,HIW"\n��ʹ��һʮ����Ѹ�׽���,���ڶ�������,��������,������\n\n"NOR);
                me->start_busy(1);
                                                }
                  
           else if (random(100) > 1 && me->query("quest/tunder_sword_18")==1 ){
message_vision(HIR"\n\n$Nһ��ʹ��һʮ����Ѹ�׽����󣬽������ʱ�����˺�֮��
���췢����Х����

"HIB"��Ȼ�����һƬ�谵�������ܲ����Ͽ��׵罻����$N��Ѹ�׽���$N
��Ϊһ�岻�ϵ�����ҫ�۵İ׹⣬����һ�ж��������ǰ��!!

"HIR"��Ȼ����$Nһ����ȣ���ɱ�䣬�ҷ��ر�!!������������
\n"NOR,me);
        room = environment(me);
        all = all_inventory(room);
        for( l = 0 ; l < sizeof(all) ; l++){
        obj = all[l];
        obj->remove_all_killer();
                                           }
        call_out("attack",5,me);

                                                                               }

           me->add("force",-200);
                                                                                                   }
        return action[random(sizeof(action))];
}
int attack(object me){
 string arg;
 object who,obj,room,*all;
 int i;
 room = environment(me);
 all = me->query_enemy(room);
 message_vision(HIR"\n\n$N���������ڵ����������쳤Х������������ʹ����"HIB"Ѹ�׽���"HIR"���һ��
\n\n                     "HIB"����   "HIW" �� "HIB"   �� "HIW"   ��"HIB"    ����!!!


"HIW"����һƬ�����ݺᣬ$N�����ѸȻ�����׹����ŵؾ���֮����ʹ���Ϊ֮
     ��ҡ����״�Ľ�����$NΪ��������������Ϯȥ��һƬ������������ܵ���
�������飬���ѷ׷׵���....\n\n\n",me);
 for( i = 0 ; i < sizeof(all) ; i++){
   obj = all[i];

   if(obj!=me){
   obj->set("kee",6);
   obj->set("gin",6);
   obj->set("sen",6);
   obj->unconcious();
              }
                                    }
   me->set("force",0);
   return 1;
}

int query_autoload()
{
if(this_player()->query("family/family_name")=="�ɽ���" && this_player()->query("quest/tunder_sword",1)==1)
return 1;
}

