#include <ansi.h>
inherit NPC;
void create()
{
set_name("������", ({ "wawafish", "fish" }) );
set("race", "Ұ��");
set("age", 30);
set("long", "������ɢ����һ����ɫ��â,�����������֮�͸е���Ȥ��\n");
set("attitude", "peaceful");
set("str", 33);
set("cor", 30);
set("limbs", ({ "ͷ��", "����", "��β" }) );
set("verbs", ({ "bite" }) );
set("combat_exp", 100);
set("chat_chance", 6);
set("chat_msg", ({
   "���......���......"}) );
set_temp("apply/attack", 15);
set_temp("apply/damage", 6);
set_temp("apply/armor", 2);
setup();
}
void die()
{
   object winner = query_temp("last_damage_from");
if(winner->query("family/family_name")=="�ɽ���" && winner->query("bloodsword")==1)
{
        tell_object(users(),HIM"\n\n
"HIC"֣ʿ��"HIW"̾��: ������ˡ��ڵ��������Դ���ʱ����Ѫħ����.\n\n"NOR);
winner->set("killyao",1);
}
::die();
}
