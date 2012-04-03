
// by lys
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string want_help(object me);
void create()
{
        set_name("�Դ���", ({ "old woman","woman" }) );
        set("long","�Դ��￴�����ǳ��ѹ�����֪���к������¡�\n");
        set("gender","Ů��");
        set("age",60);
        set("int",45);
        set("inquiry", ([
                "������" : "�� ! �Ҷ��Ӳ�֪Ϊ�α���ץ���ˡ�\n",
                "��˭ץ��": "�� ! ����Ӧ�þ��Ǳ�ڤ��ħ�̵Ľ�ͽ׽ȥ��\n",
                "����"   : (: want_help :) ,
                "������" : "�������ҵ��ĸα���ѽ��\n",
                ]) );
        setup();
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

string want_help(object who)
{
        object me = this_player();
        object room = environment(this_object());
        me->set_temp("poison_help",1);
	command("say �Ҷ��Ӿ���Ӣ�������������ơ�");
	command("say "+me->query("name")+"����԰����һ��ҵĶ�����? ");
        return "��������������������ϸ��˰�!!" ;
}
int do_nod()
{
object me = this_player();
if(me->query_temp("poison_help") != 1)
        return 0;
me->set_temp("poison_help",2);
remove_call_out("greeting");
call_out("greeting",1,me);
 return 0;
}
int do_say(string str)
{
object me = this_player();
if(me->query_temp("poison_help") != 1)
        return 0;
if(str == "yes" || str == "����")
     {
	me->set_temp("poison_help",2);
        remove_call_out("greeting");
        call_out("greeting",1,me);
        return 0;
     }
delete_temp("poison_help");
remove_call_out("greeting2");
call_out("greeting2",1,me);
return 0;
}
int do_shake()
{
  object me = this_player();
  if(me->query_temp("poison_help") != 1)
        return 0;
  me->delete_temp("poison_help");
  remove_call_out("greeting2");
  call_out("greeting2",1,me);
  return 0;
}
void greeting(object me)
{
  object ob = this_object();
  command("smile");
  command("say лл��ϰ���æ���Ҿ��ڴ˵�����Ҷ��ӵ���Ϣ��");
}
void greeting2(object me)
{
command("sigh");
tell_room(environment(this_object()),HIC"ֻ���ϸ�ת��������ȥ���ճյȴ����ӹ���
��\n"NOR);
}
int accept_fight(object who)
{
 object me = this_player();
 command("help!");
 command("say ��! "+me->name()+"Ҫ�۸�����¿�����ˡ�");
  return notify_fail(HIC"�Դ���æ����"NOR+me->name()+"��Ź�����������ϸ��˰ɡ�\n");
}
int accept_object(object who, object item)
{
 if(item->query("id") == "jade")
   {

        destruct(item);
        command("say �����Ҹ����Ƶ�����\û��");
        command("say �������Ѿ��ҵ��Ҷ����ˡ�");
        command("say лл��İ�æ��");
  if(!who->query("quests/poison_help") && who->query_temp("poison_help")==4)
          {
	    who->add("combat_exp",800);
            tell_object(who,HIY"������ˡ��ϸ��˵������¡�����\n"NOR);
            tell_object(who,HIC"��ľ��������ˣ�\n"NOR);
            who->set("quests/poison_help", 1);
            return 1;
          }
  return 1;

   }
}
