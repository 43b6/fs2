
// by roger

inherit NPC;
#include <ansi.h>
int do_acc();
void create()
{      
        set("title","�ɽ��ɵڶ�������");
        set_name("������",({"yan"}));
        set("nickname",HIR"�������"NOR);
        set("class","swordsman");
        create_family("�ɽ���",2,"����");
        set("family/master_name","��ң��");
        set("gender","����");
        set("age",87);
        set("str",30);
        set("long","�����ɽ��ɵڶ������ӣ�֣ʿ��֮ʦ�塣\n");   
        set("inquiry",([  
        ]));
        set("combat_exp",1000000);
        set("max_gin",3000);
        set("gin",3000);
        set("max_kee",3000);
        set("kee",3000);
        set("max_sen",3000);
        set("sen",3000);
        set_skill("dodge",400);
        set_skill("unarmed",400);
        set_skill("parry",400);

        setup();
        add_money("gold",5);
}
int accept_fight(object who)
{
 return notify_fail("�������ɻ��˵:�㲻����������\n");
}
int accept_kill(object who)
{
 return notify_fail("�������ɻ��˵:�㲻����������\n");
}
void init() {
  object obj;
  ::init();
  if(interactive(obj=this_player()) && !is_fighting()) 
     {
      remove_call_out("greeting");
      call_out("greeting",1,obj);
     }
add_action("do_recover","recover");
}
void greeting(object ob)
{
        command("hmm");
}
int do_recover(string str)
{
 object me;
 me=this_player();
 if(str!="force"){
   tell_object(me,"������ʲô??\n");
   return 1;
                }
 //����exp check�����ɽ�����team�ķ�ʽkill king�ܿ�ɱkingҪ250 one������               
 if(me->query_temp("win_fireking")!=1 || me->query("combat_exp") < 2500000)
 { 
   message_vision("$N�Խ�Ѩ�ַ��ڷ����ƵĴ�Ѩ�ϵ��˼��£�������Ч����\n",me);
   return 1;
 }
 else{ 
   message_vision(HIY"$N�Է���ħ�����ڵĶ��Ž�Ѩ���ڷ����ƵĴ�Ѩ�ϵ��˼���...\n"NOR,me);
   call_out("quests",1,me);
   return 1;
     }
}

void quests(object me)
{
   write("\n������һ����ȣ�ȫ��ǽ�ɽ����𣬱������Ԫ��Ѩ�ѱ�ȫ�����ƣ�\n");
   call_out("mes1",1,me);
}   
void mes1(object me)
{
 if(me->query("family/family_name")=="�ɽ���"){
   message_vision(HIY"�����ƶ�$N˵����л�����ҽ�Ѩ�����ҵ����������ٶȹ�ͨ
����һ����˴�Ѩ����Ȼ�Ǳ��ŵ��ӣ������Ҹ�����һ������
�Ĺ���
"NOR,me);
   me->set("quest/sun_fire_sword",1);
   call_out("mes2",2,me);
                                    }
 else {
message_vision(HIY"�����ƶ�$N˵����л�����ҽ�Ѩ�����ҵ����������ٶȹ�ͨ
����һ����˴�Ѩ��������ְҵ��ͬ���ҵĽ��о�ѧ��Ҳ�޷�
�����������ˣ�������֪����һ�����ױ������������ȥ��
ħ���ġ��������������������ױ�����Ʒ���Ҳ\�����ܰ�
��Ҳ˵������
"NOR,me);
  me->set("quest/save_yan",1);
      }
}
void mes2(object me)
{ 
 write("
������˵����ң����ʦ������չ����һ�׽�����ѧ������û�����ü�����ȫ��
�ľ�����ʧ�٣���Щֻ�л������ֵĽ�������Ŀǰ���ɽ�����֮�����߾���
��ʵ����ʧ��ǰ�������׽���д�ɽ��ף����ھ����ҵ����ϡ���Ȼ�����ɽ���
���־ȹ������������Ȿ���׾ʹ������ϰ��!(��֪�������help �����߾�����)
\n");

new("/data/autoload/swordsman/sun_sword_book")->move(me);
 me->set("quest/sun_fire_sword",1);
 me->set("title","�ɽ��ɾ�������");
}
