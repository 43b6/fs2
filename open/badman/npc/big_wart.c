inherit NPC;

void create()
{
  set_name("������",({"big wart","big","wart"}));
  set("long","һͷ�൱�޴��ĸ����,����ȴ�����˽���������,���������Ǻ͠��İ��Ķ�����ʧ��...\n");
  set("race","Ұ��");
  set("gender","����");
  set("age",9);
  set("attitude","peaceful");
  set("limbs",({"ͷ��","����","ǰ��","β��","����"}));
  set("verbs",({"bite","claw"}));

  set_skill("dodge",50);
  set_skill("parry",60);
  set_temp("apply/armor",60);
  set_temp("apply/attack",80);
  set("combat_exp",12500);
  
  set("chat_chance",1);
  set("chat_msg",({
      "��....��.....��......\n"
  }));
  setup();
}

void init()
{
      object me=this_player();
      ::init();
      if( me->query_temp("blood")==1 )  {
      message_vision("������һ�ŵ�$N���ϵ�Ѫ��ζ,��嶯����Ϊ$N�Ԡ������������� ʲô��,һ��ŭ��,������$N.\n",me);
      this_object()->kill_ob(me);
      }
}
