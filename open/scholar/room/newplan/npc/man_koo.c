//by sueplan
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string do_ans1();
string do_ans2();
string do_ans3();
string do_ans4();
string do_boot1();


void create() {
        set_name("��ʯ��",({"old-man koo","koo","old-man"}));
        set("class","scholar");
        set("nickname","$HIC$��ı��ʦ$NOR$");
        set("title","[1;37m����[0m");
        set("long",
"��ʯ��Ϊ��������֮������, �������һ��, 
Ӱ���������, �������������е㷳����ม�
");
        set("inquiry", ([
        "���"       : (: do_ans1 :),
        "����"       : (: do_ans2 :),
        "̫����"     : (: do_ans3 :),
        "��ɽ"       : (: do_ans4 :),
      "������"     : (: do_boot1 :),
]));
        set("str",40);
        set("cor",25);
        set("gender","����");
        set("attitude","heroism");
        set("family/family_name","����");
        set("max_gin",5000);
        set("max_kee",8000);
        set("max_sen",8000);
        set("max_force",8000);
        set("force",2000);
        set("force_faxtor",20);
        set("combat_exp",5000000);
        set_skill("stabber",120);
        set_skill("dodge",120);
        set_skill("move",120);
        set_skill("parry",120);
        set_skill("stabber",200);
        set_skill("knowpen",100);
        set_skill("god-plan",100);
        set_skill("plan",120);
        set_skill("force",200);
        set_skill("poetforce",150);
        set_skill("winter-steps",100);
        map_skill("plan","god-plan");
        map_skill("dodge","winter-steps");
        map_skill("move","winter-steps");
        map_skill("stabber","knowpen");
        map_skill("parry","knowpen");
        set("functions/movedown/level",100);
        set("functions/finger/level",100);
set("chat_chance_combat", 100);
set("chat_msg_combat",({
(: perform_action("stabber.movedown") :),
(: perform_action("stabber.finger") :),
}));
        set("chat_chance",50);
        set("chat_msg",({
        }));
        setup();
       carry_object("/open/scholar/obj/silver-pen")->wield();
       add_money("gold",50);
 }
string do_boot1()
{
        object me=this_player();
        if(me->query("family/family_name")=="����")
          {
	     if( me->query_temp("get_boots")==3)
                {
                 return("��..û������!!");
         }
               if( me->query_temp("get_boots")==1)
	        {
                 return("���ڰ�����һ��Ь��??��ͬһ���ط�");
	        }
             if( me->query_temp("get_boots")==2)
	        {
                 return("���ڰ����õ�����Ь��??��ͬһ���ط�");
	        }
             if( !me->query_temp("get_boots"))
		{
          me->set_temp("ask_thing_ok",1);
	        return("���ܰ������ҵ�Ь����?�ҵ�Ь�ӵ���!!");
		}
        }
        else
          return("��??�㲻�����ŵİ�??");
}
string do_ans1()
{
        object me=this_player();
        if(me->query("combat_exp")<7000000)
        {
        return "��ľ���ֵҪ���߰������֪���й���躵�����";
        }
        if( me->query("family/family_name")=="����" && me->query_temp("get_boots")==3)
        {
          me->set_temp("six_ask",1);
        return("
          ����������ռ�����ս������ս����ı
          ������Ų��ٵ���Ҫ����, ����....��");
}
else
        return("����躶���֪��??���ں���˵����....");
}
string do_ans2()
{
        object me=this_player();
        if(me->query_temp("six_ask")==1)
        {
          me->set_temp("six_ask",2);
          return("
          �Ȿ�����ڲ��������, �Ұ���������
          ���Ƕ�ı�ľ�ʦ������ - ̫�����ˡ�
          ");
        }
        else
          return("���º����޹ذ�??");
}          
string do_ans3()
{
        object me=this_player();
        if( me->query_temp("six_ask")==2)
        {
          me->set_temp("six_ask",3);
          return("
          �����������е���Ų�ı��, ��������
          ��֮����, �ҵ���躽�����֮��, ����
          �������еĲ�ı�����󲢼��Ը���, ��
          ��������֮��躸�Ϊ����, ����������
          ƽ����ɽ��, ����������ɽ�С�");
        }
        else
          return("����??�ǹ���???");
}
string do_ans4()
{
        object me=this_player();
        if( me->query_temp("six_ask")==3)
        {
          me->set_temp("six_ask",4);
          return("
          ������, �㲻֪����ɽ������? �ð�!!
          ��ɽ���ڳ�ɳ�Ǹ����ĵط�, ��ȥ����
          �ɡ�");
        }
        else
          return("���ճ�??��");
}
int accept_object(object me, object obj)
{
        if( obj->query("id") == "small boots" )
        {
          command("pat "+getuid(me));
          command("say ̫����, ���Ҽ���Ь��, л�ˡ�");
        if( me->query("family/family_name") == "����" || me->query_temp("get_boots")<3)
          {
            command("say �Ǻ�, ��ĸ�л�ㆪ, �Ժ���������Ҽ�Ь�ӡ�");
            write(this_object()->query("name")+"����Ь�ӻ������ϡ�\n\n"+
            "��������ȴ�������е������ı��顣\n\n");
            me->add_temp("get_boots",1);
          }
          else
          {
          command("say �ҿɲ�Ҫ��ô��Ь���!!");
          }
          destruct(obj);
        }
        else
        {
        command("say ����??");
        }
        return 1;
}
void init()
{
                object ob;
        ::init();
if(interactive(ob =this_player()) && !is_fighting() ) {
//             remove_call_out("greeting");
//             call_out("greeting",2,ob);
        }
add_action("do_nod","nod");
}
int do_nod()
{
        object ob = this_object() , me = this_player();
        if( me->query_temp("get_boots")==3) return 0;
        if( me->query("family/family_name")!="����") return 0;
        if(!me->query_temp("ask_thing_ok")) return 0;
        if(me->query_temp("get_boots")==3) return 0;
        command("say �ҵ�Ь�ӵ��ڶ��Ϸ�������, ������Ҽ������");
         me->set_temp("can_get",1);
        message_vision("$N��$n΢΢Ц�š�\n",ob,me);
        return 1;
}
void greeting(object ob)
{
  if(ob->query_temp("get_boots")==3)
  {
        command("hmm");
        command("say ������, ����ĺ�������!!");
        command("say ��Ҫ����ʲô����??");
  }
}
