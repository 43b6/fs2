#include </open/open.h>
inherit NPC ;

string give_item(object me)
{
 me=this_player();
 me->set_temp("rain_0",1);
 return "�⡣�����Ҳ��ҽ�����ȥħ���ʾ���ùã��йأ���ħ����󷨣������顣\n";

}

string pass_room(object me)
{
 me=this_player();
 
 if (me->query_temp("key") != 1)
 {
   return "�㲻����Կ�ף�����ô�����أ���\n";

 }
 me->set_temp("key",2);
 return "��Ҫ��ȥ����Կ�׽����Ұɣ�\n";

}

void create()
{
  object ob;
  set_name("����",({"young"}));
  set("title", "����");
  set("gender", "����");
  set("class","killer");
  set("age",18);
  set("attitude", "killer");
  set("long", "���ڴ˿��ؾ�������������Ķ���\t
�㲻Ҫ��Ϊ���������ɾͺ��۸�,������Ҷ��ɱ������Ŷ��֪�����ٺ�������(����)��
��û��һ���̶�,Ҫɱ���ǲ�����....\n");
   set_skill("rain-throwing",30);
   map_skill("throwing","rain-throwing");
   set("inquiry",([
       "����"    : "�ǡ�������ÿɰ�Ү����ô����������֪����Ҫ����һ��(know)��\n",
       "����ʽ"  : "�����ҿ��˾˵�����֮�����������������أ���\n",
       "��Ӱذ��": "��˵������ɱ�ֵĳ��߼����ɣ�ֻ��������һ��ˮ׼���ˣ��ſ���ѧ��\n",
       "����"    : "��˵����ڤ��ħ���к����(ԨԴ)��\n",
       "ר�ñ�����" : (: pass_room :), 
       "��ħ�����" : (: give_item :),
       "ԨԴ"    : "��˵�����������ˣ�ħ�̵ģ���ħ�����)��\n",
       ]));
   set("kee",600);
   set("max_kee",600);
   set("combat_exp",200000);
   setup();
    add_money("gold",12);
    carry_object("/open/killer/obj/s_pill.c");
    ob=carry_object("/open/killer/obj/lustar.c");
    ob->add_amount(199);
    ob->wield();
}

int accept_object (object me,object ob)
{
 if (ob->query ("id")== "key")
 {
   if (me->query_temp("key") != 2)
   {
     message_vision("��������������ģ���\n",me);
     me->set_temp("key",0);
     return 0;
   }
   message_vision("���������������Լ�����(open)������\n",me);
   command("say �������Һ����ģ����ҹ��аɡ�����");
   command("fight "+me->query("id"));
   me->set_temp("key",3);
   return 1;
 }
 return 0;
}

void init()
{
 add_action("do_know",({"know"}));
}

int do_know(object me)
{
 me=this_player();
 message_vision("����������ռǣ����㲻��̫��ϸ����ֻ��΢�����˱��⡣\n",me);
 message_vision("�������գ��˾˻����ڻ���(����)������¡�������\n",me);
 message_vision("����ʮ�գ��˾��ں��Ҷ�ս֮ʱ��ʹ��ɱ�ֱ�ɱ��ʽ(��Ӱذ�ף�\n",me);
 message_vision("ʮ��ʮ�գ��˾ˣ�һ��������ÿ�µ�ʮ����������������ʱ�����˻��૵�˵������ʽ����\n",me);
 return 1;
}