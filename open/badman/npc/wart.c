inherit NPC;
void create()
{
  set_name("����",({"wart"}));
  set("long","һͷ�ճ�����С����,����͸�ĸ��ʧ��....���Ĵ���·\n");
  
  set("race","Ұ��");
  set("genser","����");
  set("age",1);
  set("attitude","peaceful");
  set("limbs",({"ͷ��","����","ǰ��","β��","����"}));
  set("verbs",({"bite","claw"}));
  set_skill("dodge",10);
  set("combat_exp",300);
  set("chat_chance",1);
  set("chat_msg",({
       "��...��....��.....\n",
  }));

  setup();
}

void die()
{
      object killer;
      killer=query_temp("last_damage_from");
      killer->set_temp("blood",1);
      message_vision("������Ѫ������$N���·��ϡ�\n",killer);
      ::die();
}

