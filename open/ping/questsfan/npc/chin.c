//by dhk 2000.5.23
#include "/open/open.h"
#include <ansi.h>
inherit F_VENDOR;

void create()
{
        set_name("������",({"vendor chin","vendor","chin"}));
        set("title",""HIR"������̽"NOR"");
        set("gender", "����" );
        set("age", 27);
set("long", @LONG
�Ĵ���̯��Щ��֪������ġ����ǡ��ٵġ����鱨����,������г�(list)����Щʲô...
LONG
        );
        set("combat_exp",800);
        set("no_fight",1);
        set("no_kill",1);
        set("attitude", "friendly");
        set_skill("dodge", 25);
        set_skill("hammer", 17);
        set_skill("parry", 27);
        set("vendor_goods", ({
                "/open/ping/questsfan/obj/paper1",
        }) );
        setup();
        add_money("gold",135);
}

void greeting(object ob)
{
        int gender,per;
        gender = 0;
        per = ob->query("per");
        if( !ob || environment(ob) != environment() ) return;
        if( ob->query("gender") == "Ů��")
          gender = 1;
        switch( random(3) ) {
                case 0:
                if( per < 18 && gender)
                  say("������������С����˵: ��! "+ob->name(1)
                       +",Ҳ�튅��ȥһ���ĵǷ�!\n");

                say("������������С����˵: ��λ"+RANK_D->query_respect(ob)
                        +"��ʵ���ǿ����鱨�ܾ���!\n");
                        break;
                case 1:
                if( per > 22 )
                   say("������˻��ô\�ȵ�: "+ob->name(1)
                        +"���ĺ����Ӱ�����!\n");

                say("������˻��ô\�ȵ�: "+RANK_D->query_respect(ob)
                    +",��֪���ö����ص���Ļ��!! Ҫ����!?\n");
                        break;
                case 2:
                if( per < 15)
        say("������С����˵: "+ob->name(1)+",��߱�һ�㹫���ĺ���? �˳���"
                    +"��Ͳ�Ҫ�Ͻ�����.\n");
                if( per > 26 && gender)
                    say("��������̾��: ��! ����Ů"+ob->name(1)
                        +",�������������·�ѽ!!\n");

                say("��������������: ����ڴ��Ŵ�,"+RANK_D->query_respect(ob)
                        +"Ҫ�Ļ����ҿ��������һ���!һ��1000 gold!!!\n");
                        break;
         }

}

void init()
{ 
  ::init();
  add_action("do_nod","nod");
  remove_call_out("check_tensanmark");
  call_out("check_tensanmark",1,this_player()); 
}

void check_tensanmark(object me)
{
  if(present("tensan mark",me))
  {
    command("say �ⲻ����ɽͨ����������������ɽ������һֱ�������Ŷ��롣");
    command("hmm");
    command("say ���ø߼������չ�����Ը����������");
    me->set_temp("tensan/wait_answer",1);
  }
}

int do_nod()
{
  object me,ob,money;
  me = this_player();
  ob = present("tensan mark",me);
  money=new("/obj/money/diamond");
  money->set_amount(1+random(3));
  if(me->query_temp("tensan/wait_answer")==1)
  {
    command("say ̫���ˣ��Ǿ������������÷��ڣ���ȥ�ɣ�������Ӧ�õġ�");   
    destruct(ob);
    money->move(me);
    me->delete_temp("tensan/wait_answer",1);
  }
  return 0;
}
    
