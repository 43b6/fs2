  
// by lys
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string about_sec();
string about_jail();
string about_lotch();
void create()
{
        set_name("������", ({ "chao ching yun","ching yun","yun" }) );
        set("gender","����");
        set("age",25);
        set("int",40);
        set("inquiry", ([
                "����" : (: about_sec   :),
                "ʯ��" : (: about_jail  :),
                "����" : (: about_lotch :),
                ]) );
        setup();
}
void init()
{
object me = this_player();
if(me->query_temp("poison_help") == 3) {
        remove_call_out("greeting");
        call_out("greeting",1,me);
       }
}
string about_lotch()
{
  object me = this_player();
  if( me->query_temp("poison_help") < 3 )
        return "�Ҳ�֪������˵Щʲôѽ! ";
  command("say ����һħ��ͽ������Ϊ��ħ�̽���ȡ��һ���");
  command("say Ȼ��˽�ر��ﱻ���������������ڶ������");
  return "��˵������б�ʲô�ģ���㲻������ôһ���¡�";

}
string about_jail()
{
  object me = this_player();
  if( me->query_temp("poison_help") < 3 )
        return "�Ҳ�֪������˵Щʲôѽ! ";
  command("say ��ʵ����ʯ�β���һ��Ҫ��ʯ���ɡ�");
  command("say ֻҪ����ʥ����(fire)���ɡ�");
  return "ֻҪ������ĸ�׷���ʱ����ͻ����װ�����";
}
string about_sec()
{
  object me = this_player();
  if( me->query_temp("poison_help") < 3 )
        return "����˵��Ҫ������������?" ;
  command("say ��֪��ʯ�κͱ����������ܡ�");
  return "��֪��Ҫ�ʺ������ܡ�";
}
void greeting(object me)
{
  object jade = new(POISON_OBJ"jade");
  me->set_temp("poison_help",4);
  command("smile");
  command("say лл�������ң������м���Ҫ�죬�޷����ϻؼҡ�");
  command("say ������\����ת����ĸ�״��ˣ�����֪������ƽ����");
  jade->move(me);
}
