#include <ansi.h>
#include <mudlib.h>
inherit NPC;
void create() {
set_name(HIB"�P�B��"NOR, ({"tau horse" , "horse"}));
set("title", "ǧ����");
set("long","
����һƥ���ܰ��ҹ������ĺ���\n");
set("str",40);
set("cor",40);
set("cps",40);
set("max_force",3000);
set("force",3000);
set("max_gin",6000);
set("max_kee",6000);
set("max_sen",6000);
        set("age", 30);
        set("horse",1);
        set("race", "Ұ��");
        set("gender", "����");
        set("combat_exp", 600000);
        set("attitude", "peaceful");
        set("score",10000000);
        set("gold", 40);
        set("exp", 150000);
        set_skill("parry", 90);
        set_skill("move", 90);
        set_skill("dodge", 90);
        set_skill("unarmed", 90);
        set("limbs",({"��ͷ","���","����","��","��"}));
        set("verbs",({"bite","claw"}));
        set_temp("apply/armor",100);
        set_temp("apply/defense",100);
        set_temp("apply/damage",100);
        set_temp("apply/attack",100);
        setup();
}

void init() {
        add_action("do_ride","ride");
        add_action("do_dismount","dismount");
        add_action("do_full","addforce");
}

int do_ride(string str) {
        object me,horse;
        me = this_player();
        horse = this_object();
        if((str != "horse") && (str != horse->query("id")))
           return notify_fail("������ʲô��\n");
         if(me->query("class")!="blademan"&&me->query("class")!="marksman")
        return notify_fail("�㲻�ǵ��ͣ����Բ�������\n");
       if(horse->query("horse")!=1)
       return notify_fail("�ⲻ��������ࡣ�\n");
   if(me->query_temp("marks/ascend"))
return notify_fail("�������˻�����뱻 K ѽ��\n");

        if(me->query_skill("riding", 1) < 40)
           return notify_fail("��������������޷���Ԧ����\n");
        if(me->query("id") != horse->query_temp("my_boss")) {
message_vision("$N��"+horse->query("name")+"�ݺݵ�����һ�ţ��ƺ����˵��ˣ�\n",me);
           me->add("kee", -50);
           return 1;
        }
        if(me->query_temp("is_riding"))
           return notify_fail("���Ѿ����������ˡ�\n");
message_vision("$Nһ������������"+horse->query("name")+"�ı��ϣ�\n",me);
        me->set_temp("is_riding", 1);
if(me->query("family/family_name")=="ħ����" ||
   me->query("family/family_name")=="ħ��Ī��") {
        me->add_temp("apply/attack", 20);
        me->add_temp("apply/parry",20);
        me->add_temp("apply/defense",20);
        me->add_temp("apply/damage",20);
        me->add_temp("apply/armor", 20);
        me->add_temp("apply/move", 40);
        me->add_temp("apply/dodge", 20); } else {
        me->add_temp("apply/attack", 20);
        me->add_temp("apply/defense",20);
        me->add_temp("apply/parry",20);
        me->add_temp("apply/damage",20);
        me->add_temp("apply/armor", 20); }
	me->set_temp("ride_name",me->name()+"����һƥ"+horse->name()+"��");
return notify_fail("��ʱ��"+horse->query("name")+"���쳤��һ���������һ��������������˲��٣�\n");
}

int do_dismount() {
        object me,horse;
        me = this_player();
        horse = this_object();
        if(!me->query_temp("is_riding"))
           return notify_fail("�����ڲ�û������\n");
        if(me->query("id") != horse->query_temp("my_boss"))
           return notify_fail("��ƥ����������\n");
        me->delete_temp("is_riding");
if(me->query("family/family_name")=="ħ����" ||
   me->query("family/family_name")=="ħ��Ī��") {
        me->add_temp("apply/defense",-20);
        me->add_temp("apply/attack", -20);
        me->add_temp("apply/damage",-20);
        me->add_temp("apply/parry",-20);
        me->add_temp("apply/armor", -20);
        me->add_temp("apply/move", -40);
        me->add_temp("apply/dodge", -20); } else {
        me->add_temp("apply/attack", -20);
        me->add_temp("apply/defense",-20);
        me->add_temp("apply/parry",-20);
        me->add_temp("apply/damage",-20);
        me->add_temp("apply/armor", -20); }
	me->delete_temp("ride_name");
        message_vision(HIW"$Nһ����������������\n"NOR,me);
        return 1;
}

int do_full() {
        object me;
        me = this_player();
	if(!me->query_temp("is_riding"))
        return notify_fail("��û������ࡡ�\n");
        if(me->query("max_force") == 0)
           return notify_fail("�㲢û��������\n");
        if(me->query("force") >= me->query("max_force"))
           return notify_fail("�������������\n");
        me->add("force", me->query("max_force")/18);
        return notify_fail("������������ˣ�\n");
}

void die() {
        object me;
        me = find_living((string)this_object()->query_temp("my_boss"));
	if(me->query_temp("is_riding")) {
if(me->query("family/family_name")=="ħ����" ||
   me->query("family/family_name")=="ħ��Ī��") {
           me->add_temp("apply/defense",-20);
           me->add_temp("apply/attack", -20);
           me->add_temp("apply/parry",-20);
           me->add_temp("apply/damage",-20);
           me->add_temp("apply/armor", -20);
           me->add_temp("apply/move", -40);
           me->add_temp("apply/dodge", -20);
	} else {
        me->add_temp("apply/attack", -20);
        me->add_temp("apply/parry",-20);
        me->add_temp("apply/defense",-20);
        me->add_temp("apply/damage",-20);
        me->add_temp("apply/armor", -20); } }
        me->delete_temp("ride_name");
	me->delete_temp("horse");
        me->delete_temp("is_riding");
        me->delete_temp("have_horse");
	destruct(this_object());
}

int accept_fight(object me) {
        return notify_fail("���Ǳ��˵ĲƲ�����ɱ���ã�\n");
}

int accept_kill(object me) {
        return notify_fail("���Ǳ��˵ĲƲ�����ɱ���ã�\n");
}
void heart_beat()
{
 object env,mob,*enemy,target;
 int i;
 mob = this_object();
 env = environment(mob);
if( random(100) > 90)
 {
    enemy=mob->query_enemy();
    if(i=sizeof(enemy)) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
message_vision(HIY"
ͻȻ�䣬�P�B���񷢿��Ƶ���$N��ײ����\n"+
"$N���ܲ�������ײ���Ľų��죬��Ѫֱ��\n"NOR,target);
target->receive_damage("kee",175,mob);
      target->start_busy(1);
      COMBAT_D->report_status(target,1);
    }
 }
}
   ::heart_beat();
}
