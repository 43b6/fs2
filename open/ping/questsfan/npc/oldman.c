inherit NPC;     //�������� 2000.4.2 by dhk
#include <ansi.h>
#include </open/open.h>
inherit F_MASTER;
string do_god();
string do_glaze();

void create()
{
  set_name("��������",({"noheart oldman","noheart","oldman"}));
  set("long","    ������ũ���ٲݣ���������������һ���ž������ҩѧ��\n"
            +"���ȼ����¡������ǵ������϶�һ�޶��ġ�"HIY"ҩ��"NOR"����\n"
            +"���ģ���һ���������ҩ��֪ʶ����˵����δ�������˼��䲻\n"
            +"����ҩ�����������Թ�Ƨ������Ե��˵����Ҫ�������˼���ҩ��\n"
            +"��ǧ�����ǵ�ҩ�߲���ʮ��ѽ��\n");
  set("gender","����"); 
  set("class","doctor");
  set("title",""HIR"����"HIY"ҩʥ"NOR"");
  set("attitude","heroism");
  set("age",435);
  set("max_kee",10000);
  set("kee",10000);
  set("max_force",10000);
  set("force",10000);
  set("force_factor",10);
  set("combat_exp",3500000);
  set("inquiry",([
  "ҩ��" : (:do_god:),
  "˫���������" : (:do_glaze:),
  ]));
  setup();
}
void init()
{
        add_action("do_answer","answer");
set_heart_beat(1);
}
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
                else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
        :: heart_beat();
}
string do_god()
{
        object me=this_player();
        if(me->query("family/family_name")=="�μ�")
        {
         me->set_temp("dhk_glaze",1);
               return("������������\n"+"����ҵ������治���������һ����ҩ���������õ�һ���䱦\n"+"��"HIC"˫����"HIR"������"CYN"����������ѽ��������������"NOR"\n");
}
else
{
command("?");
return("��ֻ��һ���¿����������ѽ��");
}
}

int do_answer(string str)
{
  object me=this_player();
  object glaze=new("/open/ping/questsfan/obj/glaze.c");
  string *answer = ({
        "��ҩ",
        "Խ��ҩ",
        "��ζ��¶��",
        "��ת��",
        "�����ⶾɢ",
        "�������ĵ�",
        "��������ɢ",
        "ţ�ƻ���ɢ",
        "�������ĵ�",
        "���Ϸ���ɢ",
        "����������",
        "��ת������",
        "�����컯��"
  });
//�Ѿ��޸���һֱ��������bug
   if(!me->query_temp("answer"));
  else
  {
   if(str == answer[me->query_temp("answer")])
    {
     command("pat "+me->query("id"));
     write(""HIY"�ܺ�"NOR"��" + RANK_D->query_respect(me) + ""CYN"��ҩѧ��ʶ����, ֵ�ü������ձ����ڽ������������ա�"NOR"\n");
     command("recruit " + me->query("id") );
     write(""CYN"��..��Ȼ������Ե���ҾͰ���ǰ�õ��ġ�"HIC"˫����"HIR"������"CYN"��������ɣ�"NOR"\n");
//_________����________//
    glaze->move(me);
command("smile "+me->query("id"));
      }
          else
          {
            command("sigh "+me->query("id"));
            write(RANK_D->query_respect(me)+""CYN"���ҩѧ��ʶ̫��ǳ��, Ҳ��Ӧ�ö�ȥ�о��о�ҽ��,�´���Ե���ټ��ɣ�����"NOR"\n");
          }
          me->delete_temp("answer");
        }
        return 1;
}

string do_glaze()
{
       object me=this_player();
        int which;
        string *question = ({
      ""WHT"��ɰ"NOR"��"YEL"�ѻ�"NOR"",
      "�����"HIB"��Ƥ"NOR"",
      ""RED"����"NOR"��"HIR"�컨"NOR"��"HIC"���Q"NOR"",
      ""RED"����"NOR"��"HIC"���Q"NOR"��"HIG"�����Ĳ�"NOR"",
      ""HIY"����"NOR"��"HIY"�Ƹ�"NOR"",
      ""HIY"��ת������"NOR"��"HIC"˳����"NOR"",
      ""HIM"����"NOR"��"RED"���"NOR"",
      ""HIY"ţ��"NOR"��"RED"���"NOR"",
      ""HIM"�ϱ����"NOR"��꼻�",
      ""HIY"ţ��"NOR"��"HIY"����"NOR"������",
      ""RED"����"NOR"��"HIC"���Q"NOR"������",
      ""HIY"��Ҷ����"NOR"��"CYN"�ܵ�"NOR"��"HIG"�����"NOR"",
      ""HIG"������"NOR"��"HIR"��������"NOR"�೤��ɽѩˮ"
        });
        if(me->query_temp("dhk_glaze")==1)
       {
        which=random(sizeof(question));
        if(me->query_temp("have_med"))
          write("��ô��ô���ּ�����? �´������ɡ�\n");
        else
        {
        write(" "+RANK_D->query_respect(me)+""CYN"��Ҫ˫�����������\n"+"������û��һ����Ե��, �Ǿͱ�Ǹ�ˡ�\n"+"�Ϸ��������һ����, ���������Ƿ���Ե��׼���ش�("HIW"answer"CYN")�ҵ�����ɣ�"NOR"\n");
write("�������˻�����˵��:"+question[which]+"\n");
        write(""CYN"�������˺Ͱ���˵��: ����˵˵��Щҩ�����������ҩ����?"NOR"\n");
        me->set_temp("have_med",1);
       me->set_temp("answer",which);
        }
        }
        else
        return("������ô����.?");
}

