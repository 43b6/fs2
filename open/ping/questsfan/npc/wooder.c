inherit NPC;
#include </open/open.h>
#include <ansi.h>
string do_key();
void create()
{
   set_name("ǿ׳���Է�",({"wooder"}) );
    set("gender", "����");
    set("age",45);
    set("attitude", "peaceful");
    set("long","�μҵ��帺���ڵ��Է�\n");
    set("kee",20000);
    set("max_kee",20000);
    set("combat_exp",3200000);
   set("inquiry", ([
"ľդԿ��"         : (: do_key :),
   ]));
    setup();
  carry_object("/open/center/obj/torch");
  add_money("silver",20);
}
string do_key()
{
        object me=this_player();
        object key=new("/open/ping/questsfan/obj/key");
if(me->query_temp("key_ok")!=1)
{
   if( me->query("family/family_name")=="�μ�" && me->query("now_start")==1)
       {        command("say �ع��������������ã���Ҫ���Ӧ�䣡");
          message_vision("$N����$nһֻ��ľդդ��Կ�ס�\n",this_object(),me);
          key->move(me);
me->set_temp("key_ok",1);
          return("ף�����!");
        }
        else
{
          return("��˵ɶ, �����й�ϵ��\n");
}
}
else
  return("�Ҳ��Ǹ�������??\n");
}
