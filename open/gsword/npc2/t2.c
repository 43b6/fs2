#include <ansi.h>
inherit NPC;
string ask_test();
string ask_test1();

void create()
{
        set_name(HIW"�ڶ�������"NOR, ({ "testman"}) );
        set("gender", "����" );
        set("age", 158);
        set("int", 26);
set("long","��˵��ר�Ŷ����ɽ������˵��ػ���..����������й��������¡�\n");
        set("inquiry",([
        "����":(:ask_test:),
        "����ӡ��":(:ask_test1:),

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
if (this_player()->query("quests/yantestmark1")==1&&this_player()->query("quests/yantestmark2")==1 &&this_player()->query("quests/yantestmark3")==1&& this_player()->query("quests/yan")==3)
 {
  this_player()->set("quests/yan",4);
  tell_object(this_player(),HIW"���Ѿ�ͨ���ڶ�������.���������㵽����������ȥ��.\n"NOR);  
  message("system",this_player()->name()+HIW"ͨ���ɽ��ڶ�������\n"NOR,users());
  this_player()->delete("quests/yantestmark1");
  this_player()->set("title","[1;36m�ɽ��ڶ���������[0m");
  this_player()->delete("quests/yantestmark2");
  this_player()->delete("quests/yantestmark3");  
  this_player()->delete("quests/2ndtest");
  this_player()->move("/open/gsword/room2/shab1.c"); 
}
else if (this_player()->query("quests/yan")>3)
{
  tell_object(this_player(),HIW"���Ѿ�ͨ���ڶ�������.���������㵽����������ȥ��.\n"NOR); 
  this_player()->move("/open/gsword/room2/shab1.c"); 
}
else
 {
  tell_object(this_player(),HIW"�ڶ������Ŀ�����ڶ������ע����.\n������ɱ����ص���ɽ..������ɽ�����ҵ���������ӡ��.֮��������\n"NOR);
  return (HIW"�������ȥ��..�����Ҫ�������...\n"NOR);
 }

}

string ask_test1()
{
  tell_object(this_player(),HIW"��ֻ֪������һ���Ǻ�����չ��������,������..���Ҫ��ϸ��ȥ������..\n"NOR); 
  return (HIW"�����ҿ�������wiz ����˵.��Ҫ��ӡ�Ƕ���quest ���������..�����ȥ��������������ӡ�ǵ���\n"NOR);
 }

