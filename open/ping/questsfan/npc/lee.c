inherit NPC;  //��үү by dhk 2000.4.22
#include <ansi.h>
#include </open/open.h>
string do_bodyguard();

void create()
{
    set_name("��үү",({"grandfather lee","lee","grandfather"}) );
    set("gender", "����");
    set("age",77);
    set("attitude", "peaceful");
    set("long", ""CYN"���Ǻ���ׯׯ��������һ��������һ������ǰ������\n"
               +"ʱ��������������ɽկ���ˣ������������ȫ����ɥ��\n"
               +"����ȷ�����ӹ�һ�٣���������������վ����ɽׯ��;\n"
               +"��Σ���ķ�������ʧȥ������Ӷ����ҩz�ؼҩ{��"NOR"\n");
    set("kee",600);
    set("max_kee",600);
    set("goodman",1);
    set("combat_exp",1000);
    set("inquiry", ([
                     "�ؼ�"         : (: do_bodyguard :),
    ]));

    setup();
}
int accept_kill(object who)
{
  command("say ��ɱ��....");
  command("help!");
  return 1;
}
int accept_fight(object who)
{
  command("say �����....");
  command("help!");
  return 1;
}
string do_bodyguard()
{
        object me=this_player();
        object room = environment(this_object());
        if( me->query("family/family_name")=="�μ�") //&& me->query("marks/six_sp")<=2)
        {
          me->set_temp("bodyguard",1);
          return("
              ԭ�����Ƕν���������ѽ�������������ۣ���֪�����ܲ��ܻ���
              �һؼң��Ҽ��Ǻ���ɽׯλ��������վ�Ķ���������Ϳ�������
              һ����������Ŀ������ˣ����У����У�");
        }
        else
        {
          command("sigh"+me->query("id"));
          return("�㲻�Ƕν����ҵ����ˣ��Ҳ�����!!");
        }
}
void init()
{
  remove_call_out("greets");
  call_out("greets",1,this_player());
  add_action("do_nod","nod");
  add_action("do_shake","shake");
  add_action("do_say","say");
}
void greets(object me)
{
  command("sigh");
}
int do_nod()
{
object me = this_player();
if(me->query_temp("bodyguard") != 1)
        return 0;
me->set_temp("bodyguard",2);
remove_call_out("greeting");
call_out("greeting",1,me);
 return 0;
}
int do_say(string str)
{
object me = this_player();
if(me->query_temp("bodyguard") != 1)
        return 0;
if(str == "yes" || str == "ok")
     {
        me->set_temp("bodyguard",2);
        remove_call_out("greeting");
        call_out("greeting",1,me);
        return 0;
     }
delete_temp("bodyguard");
remove_call_out("greeting2");
call_out("greeting2",1,me);
return 0;
}
int do_shake()
{
  object me = this_player();
  if(me->query_temp("bodyguard") != 1)
        return 0;
  me->delete_temp("bodyguard");
  remove_call_out("greeting2");
  call_out("greeting2",1,me);
  return 0;
}
void greeting(object me)
{
  object ob = this_object();
  command("smile");
  command("say лл��ϰ��ҵ�æ��");
  command("follow "+me->query("id"));
me->set_temp("goodman",1);
}
void greeting2(object me)
{
command("sigh");
tell_room(environment(this_object()),HIC"ֻ����үүʧ������İ�����顣\n"NOR);
}
