//man.c ��ʾ�������߷���npc

inherit NPC;

void create()
{
        set_name("�����˵���", ({ "man" }) );
        set("race","����");
        set("kee",1);
        set("age", 3);
        set("long", "\n�㿴��������Ѫ, ����������, ��֪����ʲô���鷢����������(ask ����)��\n");
        setup();
}
void init()
{
add_action("do_ask","ask");
}
int do_ask(string str)
{
  object me=this_player();
  if(str=="man about ����")
  write("��Ͻ�������ǰ����, ����������ʲô��!!\n");
  call_out("ans1",5,me);
  return 1;
}
int ans1()
{
  object me=this_player();
  write("���˵���˵ : ��..��..��Ҫ..С��..��..���������\n");
  call_out("ans2",5,me);
}
int ans2()
{
  object me=this_player();
   write("���˵���˵ : ��..Ϊ�������..��������..�˸�..\n");
  call_out("ans3",5,me);
}
int ans3()
{
  object me=this_player();
  write("���˵���˵ : ���ҵ�����...�ػ���...\n");
  call_out("ans4",5,me);
}
int ans4()
{
  object me=this_player();
  write("���˵���˵ : Ҫ��..����һ��..���׵���ѽ...\n");
  call_out("ans5",5,me);
}
int ans5()
{
  object me=this_player();
  write("���˵���˵ : ����...�����ڰ��߷���������...\n");
  call_out("ans6",5,me);
}
int ans6()
{
  object me=this_player();
  write("���˵���˵ : ����..�а˸���λ...����Բ��\n");
  call_out("ans7_1",5,me);
}
int ans7_1()
{
  object me=this_player();
write("���˵���˵:����..�ֱ���...��, Ԫ, ��, ֧�������, ��, ��, ��..\n");
  call_out("ans7",5,me);
}
int ans7()
{
  object me=this_player();
write("���˵���˵ : ��ʵֻҪ��...˳ʱ�뷽��ȥ��\n");
  call_out("ans8",5,me);
}
int ans8()
{
  object me=this_player();
  write("���˵���˵ : ���հ��Ե���λ�����з�ʽ...\n");
  call_out("ans9",5,me);
}
int ans9()
{
  object me=this_player();
  write("���˵���˵ : �Ϳ���..�ߵ���...\n");
  call_out("ans10",5,me);
}
int ans10()
{
  object me=this_player();
 write("���˵���˵ : �����ǵ�...һ���������...�������������ĸ�λ...\n");
  call_out("ans11",5,me);
}
int ans11()
{
  object ob=this_object();
  write("���˵���˵ : ������ѽ...\n
\n˵���, ���˵��˾ͻ��˹�ȥ..\n");
ob->die();
}
