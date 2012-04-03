#include <command.h>
#include <ansi.h> 

inherit NPC;
int start_check( object me )
{
remove_call_out("start_check");
if( !me ) return 0;
command("say ������ɢ��������֮�����ѵ���õ����������ꡯ��");
}
int start_blade(object who)
{
object wea;
remove_call_out("start_blade");
who=this_player();
if( !who ) return 0;
if(who->query_skill("fireforce",1)>=100&&who->query("get-evil-mblade")==0)
{
write("\n[1;33m������ħ���۶�����¯�ۻ��󣬼����㴿����������һ����ʹ����������\n[0m");
command("say ��������ҪѪ����ܷ����书��(blood)��");
command("say ��˵������ĳ����������(power)��");
wea=new("/data/autoload/blademan/evil-mblade.c");
wea->move(who);
who->set("get-evil-mblade",1);
message("system",HIC"���ͻȻ�����ܲ������Ǽ��������Ļ���һ�����硣\n"NOR,users());
message("system",HIC"\n��������������԰�Ļ���"+who->query("name")+"��\n"NOR,users());
message("system",HIY"\nͬʱ�䣬���������������ɳ��ۼ���"+who->query("name")+"���ϡ�\n"NOR,users());
message("system",HIR"\nֻ��"+who->query("name")+"��¶����Ц�� : \n\n\t\t������������\n\n\t\t�ҳư�����֮��\n\n\t\t��������\n\n\t\t������������\n\n"NOR,users());
message("system",HIW"���׵ض�����"+who->query("name")+"������Ц : \n\n\t\t������������"HIG"����"HIW"�����ˡ�\n"NOR,users());
who->set("title","[1;32m��[1;37m��[1;32m��[1;37m��[0m");
return 1;
} else {
if(who->query_skill("fireforce",1)<100) command("say �㼫�𹦲�������(lv 100)��");
if(who->query("get-evil-mblade")==1) command("say ���Ѿ��������ˣ�");
return 1;
}
}
int do_nod()
{
object me = this_player();
if(me->query("evil-mblade")!=1) return 0;
message_vision(HIY"$N���˿�$n���ϵ�������\n"NOR,this_object(),this_player());
command("sigh "+me->query("id"));
command("say ��ϧ�����Ի٣�����û�������Ҹ��׽�����һ��ù���");
command("say ֻҪ�����õ�ħ���ۺ����ô��������Ҿ��ܰ��㡣");
        return 1;
}
void create()
{
    set_name("����",({"maker"}));
    set("title", "���������");
    set("gender", "����");
    set("age",43);
    set("attitude","friendly");
    set("long",@LONG

        �������������Ĺ���, ר��Ϊ��������������˳�ֵı���, 
        ������Щ�������������ܴ��������, ���Ϸ���ɵ÷���
        һ��ȥ�ռ�........

LONG);
 
    set("combat_exp",2000);
    set("str",36);
    set("con",34);
    set("int",22);
    set("max_kee",50);
    set("kee",50);
    set("max_force",50);
    set("force_factor", 1);
    set("force",50);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set("chat_chance",3);
    set("chat_msg", ({
        "[36m�ҵ�˫�ְ������������ˡ�!!\n\n"
        "[36m���ֳ��̱��������������ÿ͹�������ġ�[0m!!\n\n",
        "[36m����[33m��Ǯ[36m��!! ���ǲ�������Ӵ![0m!\n\n",
    }) );
    set("inquiry",([
    "��Ǯ":"�Ǿ�Ҫ���͹���Ҫ������ֱ�����!!��, ��, ��, ��, צ....����Ҫ��ǮӴ!!\n",
    "��":"�����ļ۸���Ҳ����ܶ���!!������ 10 �����Ӻ���!!������˼, ƭ��ƭ����\n",
    "��":"�򽣵�ʱ�仨�������!!�ո� 20 �����ӿɲ��������!!������˼, ƭ��ƭ����\n",
    "��":"ĥ��Ҫ���Ĺ���϶�!!���������ո� 12 ������!!������˼, ƭ��ƭ����\n",
    "��":"���ӵ������Ϸ���!!�ɵ��ո� 15 ��������!!������˼, ƭ��ƭ����\n",
    "צ":"�������������ͽϼ�!!������ 5 �����Ӻ���!!������˼, ƭ��ƭ����\n",
    ]));
    setup();
}

void init()
{
        object me = this_player();
        object ob;
if((ob=present("bad-evil-mblade",me))&&ob->name()=="��������������ꡯ")
        {
                call_out("start_check",1,me);
                add_action("do_nod","nod");
        }
        add_action("do_select","select");
if(me->query_temp("sumblade")==1&&me->query_temp("bad-blade")==1) {
    call_out("start_blade",1,me); }
}

int accept_object(object who, object obj)
{
object wea;
who=this_player();
        if( obj->value() == 50000 )
        {
        write("[36mС����������Щ��Ǯȥ׼��һ��������������Ĺ���!![0m\n");
        who->set_temp("money/unarmed",1);
        destruct(obj);
        return 1;
        }
        if( obj->value() == 100000 )
        {
        write("[36mС����������Щ��Ǯȥ׼��һ�������õĹ���!![0m\n");
        who->set_temp("money/blade",1);
        destruct(obj);
        return 1;
        }
        if( obj->value() == 120000 )
        {
        write("[36mС����������Щ��Ǯȥ׼��һ�������õĹ���!![0m\n");
        who->set_temp("money/stick",1);
        destruct(obj);
        return 1;
        }
        if( obj->value() == 150000 )
        {
        write("[36mС����������Щ��Ǯȥ׼��һ�������õĹ���!![0m\n");
        who->set_temp("money/fan",1);
        destruct(obj);
        return 1;
        }
        if( obj->value() == 200000 )
        {
        write("[36mС����������Щ��Ǯȥ׼��һ�´��õĹ���!![0m\n");
        who->set_temp("money/sword",1);
        destruct(obj);
        return 1;
        }
        if( obj->query_temp("name") == "[33m�Ƽ׽���������[0m" )
        {
        command("say ��λ�͹�, ��������!!��Ȼ�ܹ��õ��Ƽ׽���������!!\n");
        who->set_temp("marks/dragon",1);
        destruct(obj);
        return 1;
        }
        if( obj->query("name") == "[33m�Ƽ׽�����Ƥ��[0m" )
        {
        command("say ��λ�͹�, ��������!!��Ȼ�ܹ��õ��Ƽ׽�����Ƥ��!!\n");
        who->set_temp("marks/dragon",2);
        return 1;
        destruct(obj);
        }
        if( obj->query("name") == "[33m�Ƽ׽�������Ƭ[0m" )
        {
        command("say ��λ�͹�, ��������!!��Ȼ�ܹ��õ��Ƽ׽�������Ƭ\n!!");
        who->set_temp("marks/dragon",3);
        destruct(obj);
        return 1;
        }
        if( obj->query("name") == "[33m�Ƽ׽��������[0m" )
        {
        command("say ��λ�͹�, ��������!!��Ȼ�ܹ��õ��Ƽ׽���������!!\n");
        who->set_temp("marks/dragon",4);
        destruct(obj);
        return 1;
        }
        if( obj->query("name") == "[33m�Ƽ׽����Ĺ���[0m" )
        {
        command("say ��λ�͹�, ��������!!��Ȼ�ܹ��õ��Ƽ׽����Ĺ���!!\n");
        who->set_temp("marks/dragon",5);
        destruct(obj);
        return 1;
        }
if(who->query("family/family_name")=="ħ��Ī��"&&who->query("evil-mblade")==1)
{
if(obj->query("id")=="dragon scale"&&who->query_temp("sumblade")!=1)
        {
        command("say ���������õ�ħ�����ˣ������������տɴ���\n");
        who->set_temp("sumblade",1);
        destruct(obj);
 } else
if(obj->query("id")=="bad-evil-mblade"&&who->query_temp("bad-blade")!=1)
        {
        command("say �Ǻǣ�������Ҫ��������\n");
        destruct(obj);
        who->set_temp("bad-blade",1);
        }
command("say ������Ҫ�Ķ������ң���һ��������\n");
        return 1;
}
        if( obj->query("name") == "����" )
        {
        command("say ��λ�͹�, ���ǿ�������!!������Ҫ��������!!\n");
        who->set_temp("marks/metal",1);
        destruct(obj);
        return 1;
        }
        if( obj->query("name") == "��ͭ" )
        {
        command("say ��λ�͹�, ���ǿ��ͭ��!!������Ҫ��������!!\n");
        who->set_temp("marks/metal",2);
        destruct(obj);
        return 1;
        }
        if( obj->query("name") == "����" )
        {
        command("say ��λ�͹�, ���ǿ������!!������Ҫ��������!!\n");
        who->set_temp("marks/metal",3);
        destruct(obj);
        return 1;
        }
        if( obj->query("name") == "����" )
        {
        command("say ��λ�͹�, ���ǿ�ƽ���!!������Ҫ��������!!\n");
        who->set_temp("marks/metal",4);
        destruct(obj);
        return 1;
        }
        else
        {
        command("say ��λ�͹����Ǵ�, ��С�ľ͹��ز��ݴ�����\n!!");
        return 0;
        }
}

int do_select(string arg)
{
        object who=this_player();
        object bl,sw,st,un,fa;

        if( ( arg == "blade") && who->query_temp("money/blade") )
        {
          if ( who->query_temp("marks/metal",1) )
          {
          write("����������������¯�ۻ���, ��ʼƹƹ���ҵĴ���������......\n\n");
            if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",3) ) 
            bl=new("data/autoload/prayer/bl2");
       else if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",1) ) 
            bl=new("data/autoload/prayer/bl4");
       else if( who->query_temp("marks/metal",3) && who->query_temp("marks/dragon",5) ) 
            bl=new("data/autoload/prayer/bl6");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",2) ) 
            bl=new("data/autoload/prayer/bl5");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",4) ) 
            bl=new("data/autoload/prayer/bl3");
       else bl=new("data/autoload/prayer/bl1");
          }
          who->delete("marks/dragon");
          who->delete("money/blade");
          who->delete("marks/metal");
          bl->move(who);
          write(this_object()->query_temp("name")+"�����õĵ��ø��㿴�˿���\n\n"+
          "�������һ�ѵ��쳣�ط���, �������϶پ��Լ������淢�ɳ���ࡣ\n\n");
          return 1;
        }
    
        if( ( arg == "sword") && who->query_temp("money/sword") )
        {
          if ( who->query_temp("marks/metal",1) )
          {
          write("����������������¯�ۻ���, ��ʼƹƹ���ҵĴ���������......\n\n");
            if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",3) ) 
            sw=new("data/autoload/prayer/sw2");
       else if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",1) ) 
            sw=new("data/autoload/prayer/sw4");
       else if( who->query_temp("marks/metal",3) && who->query_temp("marks/dragon",5) ) 
            sw=new("data/autoload/prayer/sw6");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",2) ) 
            sw=new("data/autoload/prayer/sw5");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",4) ) 
            sw=new("data/autoload/prayer/sw3");
       else sw=new("data/autoload/prayer/sw1");
          }
          who->delete("marks/dragon");
          who->delete("marks/metal");
          who->delete("money/sword");
          sw->move(who);
          write(this_object()->query_temp("name")+"����õĽ��ø��㿴�˿���\n\n"+
          "�������һ�ѽ���ɢ�������Ľ�������ʹ�Լ������淢�ɳ���ࡣ\n\n");
          return 1;
        }

        if( ( arg == "stick") && who->query_temp("money/stick") )
        {
          if ( who->query_temp("marks/metal",1) )
          {
          write("����������������¯�ۻ���, ��ʼƹƹ���ҵĴ���������......\n\n");
            if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",3) ) 
            st=new("data/autoload/prayer/st4");
       else if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",1) ) 
            st=new("data/autoload/prayer/st6");
       else if( who->query_temp("marks/metal",3) && who->query_temp("marks/dragon",5) ) 
            st=new("data/autoload/prayer/st2");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",2) ) 
            st=new("data/autoload/prayer/st3");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",4) ) 
            st=new("data/autoload/prayer/st5");
       else st=new("data/autoload/prayer/st1");
          }
          who->delete("marks/dragon");
          who->delete("marks/metal");
          who->delete("money/stick");
          st->move(who);
          write(this_object()->query_temp("name")+"����õĹ����ø��㿴�˿���\n\n"+
          "�������һ�������쳣��˳��, �������϶پ��Լ�����������ǿ���ˡ�\n\n");
          return 1;
        }

        if( ( arg == "unarmed") && who->query_temp("money/unarmed") )
        {
          if ( who->query_temp("marks/metal",1) )
          {
          write("����������������¯�ۻ���, ��ʼƹƹ���ҵĴ���������......\n\n");
            if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",3) ) 
            un=new("data/autoload/prayer/un4");
       else if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",1) ) 
            un=new("data/autoload/prayer/un6");
       else if( who->query_temp("marks/metal",3) && who->query_temp("marks/dragon",5) ) 
            un=new("data/autoload/prayer/un3");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",2) ) 
            un=new("data/autoload/prayer/un5");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",4) ) 
            un=new("data/autoload/prayer/un2");
       else un=new("data/autoload/prayer/un1");
          }
          who->delete("marks/dragon");
          who->delete("marks/metal");
          who->delete("money/unarmed");
          un->move(who);
          write(this_object()->query_temp("name")+"����õ������ø��㿴�˿���\n\n"+
          "�������һ�ѿ���ʹ�õ��������ر�, װ�������ϸ���һ�������С�\n\n");
          return 1;
        }

        if( ( arg == "fan") && who->query_temp("money/fan") )
        {
          if ( who->query_temp("marks/metal",1) )
          {
          write("����������������¯�ۻ���, ��ʼƹƹ���ҵĴ���������......\n\n");
            if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",3) ) 
            fa=new("data/autoload/prayer/fa5");
       else if( who->query_temp("marks/metal",2) && who->query_temp("marks/dragon",1) ) 
            fa=new("data/autoload/prayer/fa4");
       else if( who->query_temp("marks/metal",3) && who->query_temp("marks/dragon",5) ) 
            fa=new("data/autoload/prayer/fa2");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",2) ) 
            fa=new("data/autoload/prayer/fa3");
       else if( who->query_temp("marks/metal",4) && who->query_temp("marks/dragon",4) ) 
            fa=new("data/autoload/prayer/fa6");
       else fa=new("data/autoload/prayer/fa1");
          }
          who->delete("marks/dragon");
          who->delete("marks/metal");
          who->delete("money/fan");
          fa->move(who);
          write(this_object()->query_temp("name")+"����õ������ø��㿴�˿���\n\n"+
          "�������һ�����Ӻܳ���, װ�������ϸ���һ�ɰ�ȫ��������̬֮��\n\n");
          return 1;
        }

}

