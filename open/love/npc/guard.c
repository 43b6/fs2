#include <ansi.h>
inherit NPC;

void create()
{
        seteuid(getuid());      // ����һ��Ҫ
        set_name("�ؿ�����", ({ "guard" }) );
        set("race", "����");
        set("gender", "����");
        set("age", 35);
        set("long", "�������ðѴ����������Ŵ��š�\n");
        set("str", 30);
        set("cor", 30);
        set("max_kee", 1000);
        set("max_force", 500);
        set("force", 500);
        set("force_factor", 5);
        set("combat_exp", 300000);
        set_skill("sword", 60);
        set_skill("parry", 40);
        set_skill("dodge", 30);
        set_skill("force", 30);

        set_skill("shasword", 60);
        set_skill("sha-steps", 40);

        map_skill("sword","shasword");
        map_skill("dodge","sha-steps");

        set("chat_chance", 8);
        set("chat_msg",({
             "�ؿ�����˵��: �������죬��������ߡ�\n",
             "�ؿ�����������һ��˵: ����أ���ɱ��������˵�ɡ�\n",
             "�ؿ�����������һ��˵: Ҫ���ز��ѣ�������������ʸ���\n",
        }) );
        set_temp("apply/armor", 80);

        setup();
        add_money("silver", 5);
        carry_object("/obj/longsword")->wield();
}

int accept_kill(object me)
{
  object ob,guard;
  ob=this_object();
  guard=present( "guard 2",environment(ob) );
  if( !present( "guard 2",environment(ob))||!living(guard)) return 1;
  else {
  tell_room(environment(me),"һ���ϣ������Ҳ�!����ɱ�� \n"),
  message_vision(HIY"\n�ؿ�������������ҪӲ����������$N��������\n"NOR,me
  );
  guard->kill_ob(me);
  return 1;
  }
}
int accept_fight(object me)
{
  object ob,guard;
  ob=this_object();
  guard=present( "guard 2",environment(ob) );
  if( !present( "guard 2",environment(ob))||!living(guard)) return 1;
  else {
  tell_room(environment(me),"һ���ϣ������Ҳ�!����ɱ�� \n"),
  message_vision(HIY"\n�ؿ�������������ҪӲ����������$N��������\n"NOR,me
  );
  guard->kill_ob(me);
  return 1;
  }
}
