//by sueplan ������� ���Ѵ�
//�޸�juka_jone.c �� 90 8/28 by sueplan
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
int done=0;


void create() {
        set_name("[1;32m�������[0m",({"juka jone","juka","jone"}));
        set("class","scholar");
        set("nickname","$HIW$�����¼�ı֮���$NOR$");
        set("title","[1;33m��[1;31m��[1;33m��[1;31m��[0m");
        set("long",
        "\n��������������������ӣ������������м�����
���ᣬ�������������һ������Ϊ�д�����һ����
Ȼ����ȴ��ʧ���Լ������ü�ı����ս�£��к�����
��Ϊ���һ�����������֮�ˡ�\n");
        set("str",40);
        set("cor",40);
        set("cps",40);
        set("gender","����");
        set("attitude","heroism");
        set("family/family_name","����");
        set("quest/gold-fire","1");
        set("max_gin",20000);
        set("max_kee",25000);
        set("max_sen",20000);
        set("max_force",20000);
        set("force",20000);
        set("age",93);
        set("force_factor",25);
        set("combat_exp",8000000);
        set("score",9000000);
        set_skill("stabber",130);
        set_skill("dodge",150);
        set_skill("move",120);
        set_skill("parry",120);
        set_skill("knowpen",120);
        set_skill("god-plan",100);
        set_skill("plan",120);
        set_skill("force",200);
        set_skill("fireforce",200);
        set_skill("winter-steps",100);
        map_skill("plan","god-plan");
        map_skill("dodge","winter-steps");
        map_skill("move","winter-steps");
        map_skill("stabber","knowpen");
        map_skill("parry","knowpen");
        map_skill("force","fireforce");
        set_temp("apply/armor",100);
        set_temp("apply/defense",100);
        set_temp("apply/damage",100);
        set_temp("apply/attack",100);

        set("functions/movedown/level",100);
        set("functions/finger/level",100);
        set("functions/gold-fire/level",90);
set("chat_chance_combat", 100);
set("chat_msg_combat",({
(: perform_action("stabber.movedown") :),
(: perform_action("stabber.finger") :),
}));
        set("chat_chance",50);
        set("chat_msg",({
        }));
setup();
        carry_object(START_OBJ"ten_pen")->wield();
        carry_object(START_OBJ"k_cloth")->wear();
        carry_object(PING_OBJ"neck0")->wear();
        carry_object("/open/scholar/room/newplan/obj/s-shield")->wear();
        add_money("diamond",10);
 }
void init()
{
add_action("do_action","",1);
        set_heart_beat(1);
}
int do_action(string str)
  {
        object who=this_player();
        if(str)
        {
        if(strsrch(str,"plan.speed")!=-1)
        {
          command("say �޴�ѽ!!�ѵ��㲻֪����Ϯ֮��������������?!\n");
          write("\n������������̬����, ���ƽ�����ǰ�ļ�ı!!!\n");
          kill_ob(who);
          command("perform stabber.finger");
          who->start_busy(5);
          return 1;
        }
        if(strsrch(str,"plan.hole")!=-1)
        {
          command("say ��������ǰ������??����Ū����С������!!\n");
          write("\n������������̬����, ���ƽ�����ǰ�ļ�ı!!!\n");
          kill_ob(who);
          command("perform stabber.finger");
          who->start_busy(5);
          return 1;
        }
        if(strsrch(str,"plan.wait")!=-1)
        {
          command("say ���÷�������?!����Ϊ�һ᱿�����ֵز���??\n");
          write("\n������������̬����, ���ƽ�����ǰ�ļ�ı!!!\n");
          kill_ob(who);
          command("perform stabber.finger");
          who->start_busy(5);
          return 1;
        }
        if(strsrch(str,"plan.rob")!=-1)
        {
          command("say �û���?!�޴�!!�ѵ��㲻֪���˼�Ϊ��������??\n");
          write("\n������������̬����, ���ƽ�����ǰ�ļ�ı!!!\n");
          kill_ob(who);
          command("perform stabber.finger");
          who->start_busy(5);
          return 1;
        }
        if(strsrch(str,"plan.false")!=-1)
        {
          command("say ���֮����������ļ�ı, �һ��в���֮��??\n");
          write("\n������������̬����, ���ƽ�����ǰ�ļ�ı!!!\n");
          kill_ob(who);
          command("perform stabber.finger");
          who->start_busy(5);
          return 1;
        }
        if(strsrch(str,"plan.mount")!=-1)
        {
          command("say �������??�����̫���˰�!\n");
          write("\n������������̬����, ���ƽ�����ǰ�ļ�ı!!!\n");
          kill_ob(who);
          command("perform stabber.finger");
          who->start_busy(5);
          return 1;
        }
        if(strsrch(str,"lock-link")!=-1)
        {
          command("say �����������о��ķ����ɱ��������!!�Ҷ�����?\n");
          write("\n������������̬����, ���ƽ�����ǰ�ļ�ı!!!\n");
          kill_ob(who);
          command("perform stabber.finger");
          who->start_busy(5);
          return 1;
        }
        if(strsrch(str,"plan.ghost")!=-1)
        {
          command("say �۵�??�ҿɲ��᱿�����ֵز��!!\n");
          write("\n������������̬����, ���ƽ�����ǰ�ļ�ı!!!\n");
          kill_ob(who);
          command("perform stabber.finger");
          who->start_busy(5);
          return 1;
        }
        if(strsrch(str,"plan.getweapon")!=-1)
        {
          command("say �������??�����Ǳ��Ŀ���ѽ!!\n");
          write("\n������������̬����, ���ƽ�����ǰ�ļ�ı!!!\n");
          kill_ob(who);
          command("perform stabber.finger");
          who->start_busy(5);
          return 1;
        }
        }
return 0;
}
int accept_kill(object who,object me)
{
        who=this_player();
        me=this_object();
        command("wield pen");
        command("say �����㿴��ʲô�����µ�һ��ʦ�ļ�ı��!!����!!");
        command("kill "+who->query("id"));
        command("perform stabber.movedown");
        return 1;
}
int accept_fight(object who)
{
        who=this_player();
        command("say ������Һ��ҽ���, �Ǿͱ����������!!");
          return 0;
}

void heart_beat()
{
 mixed all;
object me,room,*target,victim,obj;
int i,k,a,b;
a=random(100);
me=this_object();
room=environment(me);
 all = all_inventory(room);
target=me->query_enemy(room);
if(i=sizeof(target)) 
  {
        if(a <= 10) {
        victim=target[random(i)];
        if(environment(me)==environment(victim)) {
        for(k=0;k<5;k++)
        {
        message_vision(HIR"�������ȡ������������֮������$N��������!!\n"NOR,victim);
        victim->add("kee",-800);
        COMBAT_D->report_status(victim);
        }
        }
        }
        if(a<=50&&a>=30) {
    message_vision(HIB"

�������ȡ�����游�����ĵ��� - ��ľ����!!

а��Ŀ�𣺿��ҵġ�ת�����֮�ơ� ��ǰ�ĵ���һһ����!!

"NOR,me);
for(b=0;b<i;b++) {
if(userp(target[b])) continue;
target[b]->die();
me->add("force",-b*5);
        }
        }
        if(a<85&&a>65) {
message_vision(HIW"\n��������������һ��֮�����ھ���һ����̴�ͷ����ñ��\n"NOR,me);
        me->delete_busy();
        me->add("force",300);
        me->receive_curing("kee",500);
        me->receive_heal("kee",500);
          me->receive_heal("sen",100);
          me->receive_heal("gin",100);
        }
        if(a<30&&a>=20) {
          message_vision(HIW"\n�������������ߡ��������顯������������ģ����������ܵ�������˺�!!!\n"NOR,me);
        target[b]->start_busy(1);
        target->add("kee",-500);
        }
        if(a >97  && me->is_fighting())
        {
        message_vision(HIY"
	       ������ѽ�������������ϣ����������̲���������ѧ
           ֮�ۣ�������߳�Ȼص�"HIR"���˳��� ս�޲�ʤ��"HIW"������������������\n"NOR,me);
        for( i = 0 ; i < sizeof(all) ; i++)
	   {
    obj = all[i];
	    if( obj->is_character() && !obj->is_corpse() && living(obj)
	    && obj->query("id")!="juka jone")
	      {
message_vision(HIR"�������������ȫ�����������й������!!\n"NOR,obj);
	      obj->add("force",-((obj->query("force")/5))*4);
	      COMBAT_D->report_status(obj, 1);
	      }
	   }
	 }
  }
        :: heart_beat();
}
void die()
{
object winner = query_temp("last_damage_from");
object item;
item=new("/u/s/sueplan/newplan/obj/qbook.c");
//������arch����
item->move(winner);
tell_room(environment(),sprintf("%s��������������ѵ�һ��������ԡ�\n",winner->name()));
tell_object(users(),"
[1;37m�������˵�� : 
        [1;37m���������ʦδ��������  ��ʹӢ����\��������\n
                    [1;33m"+winner->query("name")+"[1;37mѽ����\n
           [1;37m�ѵ������µ�һ��ʦ�ļ�ı�������𣡣�[0m");
winner->set_temp("ko_jone",1);
:: die();
}
