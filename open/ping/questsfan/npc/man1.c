inherit NPC;  //���� by dhk 2000.6.12
#include <ansi.h>
#include </open/open.h>

void create()
{
    set_name("��ɽ����",({"tendo man","tendo","man"}) );
    set("gender", "����");
    set("age",40);
    set("attitude", "peaceful");
    set("long", "���Ǿ�ס��ɽ���Լ��ά���Ĵ��񣬱���һ����ʵ����ʵ��\n"
               +"һλ��ز�©�ģ�����ʿ��\n");
    set("kee",600);
    set("max_kee",600);
    set("combat_exp",1000);
    set("class","fighter");
    set_skill("move",20);
    set_skill("force",20);
    set_skill("dodge",20);
    set_skill("parry",20);
    set_skill("unarmed",20);
    setup();
}
int accept_kill(object who)
{
  return 1;
}
int accept_fight(object who)
{
  return 1;
}
void init()
{
  remove_call_out("greets");
  call_out("greets",1,this_player());
}
void greets(object me)
{
  tell_object(me,"��ɽ�������������˵�������˵ɽ�ϳ���һλ����\n");
  tell_object(me,"                        ���˿�������ɽ�±����������ָ�����Ƕ����ɽ�ھ�����\n");
  tell_object(me,"                        ���ж�����֡�����Ī���������ʧ�ˣ�����̫�����ˣ�\n");
  remove_call_out("greets");
}
