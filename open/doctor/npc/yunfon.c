#include <ansi.h>
inherit NPC;

string ask_fon();
string ask_but();
string ask_baby();

void create()
{
    set_name("���Ʒ�", ({"hwa yun fon","hwa","fon","yun"}) );
    set("long", "
������Ŀǰ����Ψһ��������֮������������ǰ����
��˵������Ĺ���������һ����\n");
    set("gender", "����");
    set("title", HIC"���ʮ��"NOR);
    set("age", 65);
    set("inquiry",([
         "����֮��"     :  (: ask_fon :),
         "����"     :  (: ask_but :),
         "��������"     :  (: ask_baby :),
    ]));
    set("attitude", "peaceful");
    setup();
}
string ask_fon()
{
    object me=this_player();

    if(me->query("doctor/get_mark") == 1  && !me->query("doctor/save_die") 
    && me->query("class")=="doctor")
{
    if(!me->query("doctor/ask_fon"))
        {command("shake "+me->query("id")); me->add("doctor/ask_fon",1); return "";}
    else if(me->query("doctor/ask_fon") == 1)
        {command("think "+me->query("id")); me->add("doctor/ask_fon",1); return "";}
    else if(me->query("doctor/ask_fon") == 2)
        {command("hmm "+me->query("id")); me->add("doctor/ask_fon",1); return "";}
    else if(me->query("doctor/ask_fon") == 3)
        {command("arc "+me->query("id")); me->add("doctor/ask_fon",1); return "";}
    else if(me->query("doctor/ask_fon") == 4)
        {command("stare "+me->query("id")); me->add("doctor/ask_fon",1); return "";}
    else if(me->query("doctor/ask_fon") == 5)
        {command("dunno "+me->query("id")); me->add("doctor/ask_fon",1); return "";}
    else
{
        command("tsk "+me->query("id"));
        command("say û�뵽�㾹Ȼ��ô�����ԣ�");
        command("say �ðɣ���Ȼ���������Ե��...");
        command("say �ҾͰѡ����컹���������ڸ��㣡");
        command("say ������֮ǰ�и�����...");
        command("grin "+me->query("id"));
        me->delete("doctor/get_mark");
        me->set("doctor/ask_fon",1);
        return "";
    }
  }
}
string ask_but()
{
    object me=this_player();

    if(me->query("doctor/ask_fon") == 1)
{
        command("wa "+me->query("id"));
        command("say �ü��ˣ������ı��ʦ����Ȼ��ͬ...");
        command("cac "+me->query("id"));
        command("say �������ƽ������������ֻ���L����������Ⱥ�...");
        command("say ����������ݡ����ѵ�����...");
        command("say ��֪���ܷ�����ҵ�����������֣�");
        me->delete("doctor/ask_fon");
        me->set("doctor/ask_but",1);
        return "";
  }
}
string ask_baby()
{
    object me=this_player();

    if(me->query("doctor/ask_but") == 1)
{
        command("say ����������ָ��ħ���ۡ���������𡱡������Ѫ������������ʥצ���Լ�����ɽӥ�ᡱ...");
        command("say ������ֻ��������δ�L������...");
        command("say ��һ����ħ���ػ�����������Ƭ...���ơ�ħ���ۡ�");
        command("say �����������ɽ֮����ʥ�޻�����ë...���ơ������");
        command("say ħ����֮ȡ�ò��ѣ������������������û���𣬿��¾Ͳ��Ǽ�������...");
        command("say ����...����˵������Ĵ�����൱̰�����㲻�����ɴ�����...");
        command("say ���Ծ��ڴ�...�������Ϳ����Լ�����...");
        command("addoil "+me->query("id"));
        me->delete("doctor/ask_but");
        me->set("doctor/ask_baby",1);
        return "";
  }
}
int accept_object(object me, object ob)
{
    string obj;
    int force = (int)me->query_skill("force",1);
    obj = ob->query("name");

    if(me->query("doctor/ask_baby") == 1)
{
    if(obj == HIY"ħ����"NOR)
{
        command("tsk");
        command("say �ü��ˣ�ԭ�������������"+ obj +"��");
        me->set("doctor/give_baby1", 1);
        destruct(ob);
    if(!me->query("doctor/give_baby2") == 1)
{
        command("say ��...����һ��������֣�");
        return 1;
}
        command("spank "+me->query("id"));
        command("say ��ı����������ҹ�Ŀ�࿴...");
        command("say �벻��...��ʮ����...�������ҵȵ�����...");
        command("say ����������...����������L��....");
        command("say ��...�����ұ�����ŵ�ԣ������㡮���컹��������");
        message_vision("ֻ�����Ʒ�˫��������ı��ģ��������ڵġ������\��������������$N������...\n", me, ob);
        message_vision("$N�ı��ĸе�һ��ů���������룬�����ƺ����������\n", me);
        me->set("doctor/save_die", 1);
        me->set_skill("force",force+5);
        log_file("quest_savedie", sprintf("%s(%s) �⿪���컹���� on %s\n"
        ,me->query("name"),me->query("id"), ctime(time()) ));
        me->delete("doctor/ask_baby");
        me->delete("doctor/give_baby1");
        me->delete("doctor/give_baby2");
        call_out("fon_die",2,me);
        return 1;
}
    if(obj == HIR"�����"NOR)
{
        command("tsk");
        command("say �ü��ˣ�ԭ�������������"+ obj +"��");
        me->set("doctor/give_baby2", 1);
        destruct(ob);
    if( !me->query("doctor/give_baby1") == 1)
{
        command("say ��...����һ��ħ�����֣�");
        return 1;
}
        command("spank "+me->query("id"));
        command("say ��ı����������ҹ�Ŀ�࿴...");
        command("say �벻��...��ʮ����...�������ҵȵ�����...");
        command("say ����������...����������L��....");
        command("say ��...�����ұ�����ŵ�ԣ������㡮���컹��������");
        message_vision("ֻ�����Ʒ�˫��������ı��ģ��������ڵġ������\��������������$N������...\n", me, ob);
        message_vision("$N�ı��ĸе�һ��ů���������룬�����ƺ����������\n", me);
        me->set("doctor/save_die", 1);
        me->set_skill("force",force+5);
        log_file("quest_savedie", sprintf("%s(%s) �⿪���컹���� on %s\n"
        ,me->query("name"),me->query("id"), ctime(time()) ));
        me->delete("doctor/ask_baby");
        me->delete("doctor/give_baby1");
        me->delete("doctor/give_baby2");
        call_out("fon_die",2,me);
        return 1;
} else {
        command("arc "+me->query("id"));
        command("say ����ҵ�����ɶ������");
        ob->move(me);
        message_vision("���Ʒ彫"+ obj +"������$N...\n", me);
        return 1;
    }
  }
}
int fon_die(object me)
{
        write(HIY"���Ʒ�ͻȻ����˫�֣�һʱͷ��Ŀѣ��������Ѫ...\n"NOR,me);
        call_out("fon_die2",1,me);
}
int fon_die2(object me)
{
        write(HIY"��Ͻ�Ϊ���Ѱ���������Ħ�������Ѩ...\n"NOR,me);
        call_out("fon_die3",5,me);
}
int fon_die3(object me)
{
        write(HIY"����...���Ʒ����������˹���...\n"NOR,me);
        call_out("fon_die4",2,me);
}
int fon_die4(object me)
{
        write(HIY"���Ʒ������˵������...���...��...�ѽ�...�˼���...��...������.....����ú�����...�츣����...\n"NOR,me);
        call_out("fon_die5",2,me);
}
int fon_die5(object me)
{
        write(HIY"˵��˻������Ʒ���������þ���������徣�����������...\n"NOR,me);
        this_object()->die();
        return 1;
}
