inherit NPC;
void create()
{
  set_name("��·����",({"lost fighter","lost","fighter"}));
  set("long","����һ����ɽ�ɵ�����,��������Ӧ���Ƕ��˹Ⱥ���ɽս��ʱ���������
�˲�֪�����ɭ���е�.\n");
  set("gender","����");
  set("race","����");
  set("age",18);
  set("attitude","aggressive");
  set("max_kee",420);
  set("max_force",530);
  set("force",530);
  set("force_factor",10);
  set("kee",420);
  set("str",25);
  set("con",25);
  set("combat_exp",150000);
  set_skill("unarmed",65);
  set_skill("dodge",40);
  set_skill("move",10);
  set_skill("parry",60);
  set_skill("force",40);
  set_skill("haoforce",20);
  set_skill("lungshan",45);
  set_skill("henma-steps",20);
  map_skill("unarmed","lungshan");
  map_skill("dodge","henma-steps");
  map_skill("move","henma-steps");
  map_skill("force","haoforce");
  set("chat_chance",1);
  set("chat_msg",({
     "�ɶ��ɭ��!����ô��ȥ��???\n"
  }));
  setup();
}
