#include <ansi.h>
inherit NPC;
string ask_test();
string ask_train();

void create()
{
        set_name(HIW"��һ������"NOR, ({ "testman"}) );
        set("gender", "����" );
        set("age", 63);
        set("int", 26);
set("long","��˵��ר�Ŷ����ɽ������˵��ػ���..����������й��������¡�\n�������ѯ�����㻹��Ҫѵ�����(ask testman about train)��\n");
        set("inquiry",([
        "����":(:ask_test:),
        "train" : (:ask_train:),

        ]));
        set("combat_exp",50000);
        set("max_kee",500);
        set("max_gin",500);
        set_skill("unarmed",50);
        set_skill("parry",50);
        set_skill("force",50);
        setup();
   }

string ask_test()
{
if (this_player()->query("quests/test")>199&& this_player()->query("quests/yan")==2)
 {
  this_player()->set("quests/yan",3);
  tell_object(this_player(),HIW"���Ѿ�ͨ����һ������.���������㵽�ڶ�������ȥ��.\n"NOR);  
  message("system",this_player()->name()+HIW"ͨ���ɽ���һ������\n"NOR,users());
  this_player()->set("title","[1;36m�ɽ���һ��������[0m");
  this_player()->move("/open/gsword/room2/shaa1.c"); 
}
else if(this_player()->query("quests/yan")>2) {
  tell_object(this_player(),HIW"���Ѿ�ͨ����һ������.���������㵽�ڶ�������ȥ��.
\n"NOR);
  this_player()->move("/open/gsword/room2/shaa1.c");
}
else
{
tell_object(this_player(),HIW"��һ�����Ŀ�����ڶ�������ɽ���������֪���˽�..\n"NOR);
 return (HIW"������������ǰ��..��������ɽ���д�200���������߲���\n"NOR);
 }

}
string ask_train()
{

 int num;
 num=this_player()->query("quests/test",1);
 if (num<200)
   return sprintf("����Ŀǰ����%d���������� ,�ټ��Ͱ�!\n",num);
 else 
 return sprintf("�����Ѿ�����ͨ����һ�������ʸ���..�����������ѯ��һ���й���������!");
 }
