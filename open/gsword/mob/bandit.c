#include <ansi.h>
#include </open/open.h>
inherit F_VENDOR;
int done = 0;
void create()
{
	set_name("��ջ�ϰ�",({"keeper"}));
	set("long","���п�ջ���ϰ�,�����㰮�����.����Կ�������������ô(list).");
	set("gender","����");
	set("combat_exp",2000);
        set("age",25);
	set("str", 30);
        set("cor", 30);
	set("con", 30);
	set("vendor_goods", ({
	    COMMON_OBJ"pill2",
            "/obj/example/wineskin",
            "/obj/example/dumpling",
        }) );
        set("inquiry",([
            "չ����" : "�����Ǹ����˶�����Ҫ�ֱ��˵�С��?\n",
            "������" : "�Ǻ�...�㻹���һ��������ô���ҷ�����?...�ٴ���...\n",
            "����" : "�...�������С���ҽ�,������ǹ��ؾ��������.\n",
            ]) );
        set_skill("dodge",30);
        set_skill("unarmed",60);
	set_skill("dagger",20);
        set_skill("parry",30);
	setup();
        carry_object("/obj/example/dagger.c")->wield();
        carry_object("/open/gsword/obj/robe")->wear();
             carry_object("/open/gblade/obj/picture");
        
}
void init()
{
  ::init();
  add_action("do_show","show");
}

int accept_fight(object who)
{
   return notify_fail("�ϰ岻Ը���㶯��.\n");
}

int accept_kill(object who)
{
   return notify_fail("�ϰ岻Ը���㶯��.\n");
}
      
int accept_object(object me,object ob)
{  
  if(ob->query("id") != "su_note")
  {
    command("say л��,�����Ҳ���Ҫ.\n ");
    return 1;
  }
  write("�ϰ���ɫͻ��.\n");
  command("say ��...����Ҳ�Ѳ�����ô��!!!\n");
  me->set_temp("have_note",1);  
/*  command("say ������??? Ҫ���ҵĵ�,����������!!!\n ");
  if(done)
       return 1;
  done = 1;
  kill_ob(me);
*/  
  return 1;  
}
  
int do_show(string arg)
{ 
  object me;
  me=this_player();
  if(me->query_temp("see_blood"))
  {
    write("�ϰ�˵: �㻹֪����ô??...����...�Ĳ�������!!!\n");
    kill_ob(me);
  }  
  else
    write ("��ʲô����!\n");
  return 1;
}     
