
// д���е�ͷ������..�� bug �Ļ��ǵĸ������:P..�����µĵ���Ҳ������:P



#include <mudlib.h>

#include <daemons.h>

#include <money.h>

#include <ansi.h>

#include <language.h>

#include <man.h>



inherit ARMOR;

inherit DAEMON;

string inputstr,verb;



void create()

{

  set("name"," ��ħ��ʿ����");

  set("id",({"Magic cloak","cloak","��ħ��ʿ����"}));

  set("short",
    this_player()->query("chi_name")+ "�Ĵ�ħ��ʿ����(Magic cloak)");

set("long",@LONG

    ����һ���ܹ��ŷ�������������磬��˵ֻҪ�κ���һ�������ͻ���..bug����

    ����<help cloak>�Ի�ø������Ѷ��

LONG

);

  set("unit","��");

  set("mass",1);

  set("bulk",1);

  set("type","cloak");

 set("armor",99999999);

  set("light",1);

  set("prevent_drop",1);

  set("prevent_get",1);

}


string query_auto_load()

{

    return "/u/c/cloud/armor/cloak.c" + ":";

}

void init()

{

  add_action("help","help");

  add_action("message2","sh");

  add_action("message1","mes");

  add_action("message3","low");

  add_action("message4","smi");

//add_action("hookcmd","");

  add_action("full","full");

  add_action("rem","rem");

  add_action("vend","vend");

  add_action("mob","mob");

  add_action("whereis","whereis");

  add_action("getobj","getobj");

  add_action("back","back");

  add_action("message","mess");

  add_action("morep","morep");

  add_action("morei","morei");

  add_action("wizard_chat","wiz");

  add_action("list_wizards","wizs");

  this_player()->set_temp("heat",1);

}



//int hookcmd(string str)

//{

//  verb=query_verb();

//  return 1;

//}



//int inputstr(string str)

//{

//  write(str);

//}

int rem(string str)

{

  string ob,player;

  object obj;



  sscanf(str,"%s from %s",ob,player);

  obj=present(ob,get_object(player));

  if(obj==NULL)

  {

    write("����û�����ֶ���\n");

    return 0;

  }

  else

  {

    write("����"+player+"����"+ob+"\n");

//    get_object(player)->unequip_armor(obj);   ��� function Ҳ���� work

    obj->move(this_player());

    obj->move(get_object(player));

    return 1;

  }

}



int back(string str)

{

  string ob,player;

  object obj;



  sscanf(str,"%s to %s",ob,player);

  obj=get_object(ob,this_player());

  if(obj==NULL)

  {

    write("��û����������\n");

    return 0;

  }

  if(get_object(player)==NULL)

  {

    write("����û����������\n");

    return 0;

  }

  obj->move(get_object(player));

  if(get_object(player)->query("chi_name")!=NULL)

  {

    write("�㽫"+ob+"�͸�"+get_object(player)->query("chi_name")+"\n");

  }

  else

  {

    write("�㽫"+ob+"�͸�"+get_object(player)->query("cap_name")+"\n");

  }

  return 1;

}



int getobj(string str)

{

  string ob,player;

  object obj;

  sscanf(str,"%s from %s",ob,player);

  obj=get_object(ob,get_object(player));

  obj->move(this_player());

  if(get_object(player)->query("chi_name")!=NULL)

  {

    write("��͵��"+get_object(player)->query("chi_name")+"��"+ob+"\n");

  }

  else

  {

    write("��͵��"+get_object(player)->query("cap_name")+"��"+ob+"\n");

  }

  return 1;

}



int whereis(string str)

{

  write(environment(get_object(str))->query("long"));

  return 1;

}



int mob(string str)

{

  object ob,victim,victim1;

  string temp,real_oid;

  int i,int_oid;



//  if (sscanf(str,"%s from %s", obname, victname)!=2)

//  {

//     return help();

//  }

//  sscanf(str,"%s", obname);

  ob = environment(this_player());

  victim = present(str, ob);



  if (!victim)

  {

    victim=get_object(str);

  }

  if(!victim)

  {

     notify_fail ("����û�����ֶ���! \n") ;

     return 0 ;

  }

//  write(identify(file_name(ob)));

//  write(file_name(ob));

  int_oid=getoid(victim);

  write(int_oid);

  real_oid=identify(int_oid);

  temp=file_name(victim);

  temp=replace_string(temp,real_oid,"");

  temp=replace_string(temp,"#","");

  write(temp);

  return this_player()->more(temp+".c");

}





int morei()

{

string str;

object obj;

obj=this_player();

str=file_name(environment(obj));

return this_player()->more(str+".c");

}





int morep(string str)

{

  object obj;

  obj=find_player(str);

write(file_name(environment(obj))+"\n");

write("��� "+str+"�� "+file_name(environment(obj))+"\n");

return this_player()->more(file_name(environment(obj))+".c");

}



int full(string str)

{

  int max_hp,max_sp,max_tp;

  object ob;



  if(str==NULL)

  {

    ob=this_player();

  }

  else

  {

    ob=find_living(str);

  }

  max_hp=ob->query("max_hp");

  max_sp=ob->query("max_sp");

  max_tp=(ob->query("level"));

  max_tp=max_tp*50;

  ob->set("hit_points",max_hp);

  ob->set("spell_points",max_sp);

  ob->set("talk_points",max_tp);

  ob->set("bleeding",0);

  write("�ㆈ���ռ��ظ����� [32;1m�����ɺ�����[37;0m  \n");

  if(ob==this_player())

    say(this_player()->query("chi_name")+" ���І�������,��ʱ[32;1m��ر�ɫ[37;0m ,ת�ۼ������ݹ����\n");

  else

  {

    say(this_player()->query("chi_name")+" ���І�������,��ʱ[32;1m�����[37;0m ,"+ob->query("chi_name")+"������!!\n");

  }

  return 1;

}



int wizard_chat(string str)

{

  object *all_wizards;

  int i;



  if (!str || str==NULL)

  {

    notify_fail("����Ҫ�͸�������ʦʲôѶϢ?\n");

    return 0;

  }

  all_wizards = filter_array(users(), "filter_wizards", this_object());

  for (i=0; i<sizeof(all_wizards); i++)

  {

    tell_object(all_wizards[i], "[ר���Լ�] "+this_player()->query("chi_name")+

             " ˵ :"+str+"\n");

  }

  return 1;

}





int list_wizards(string str)

{

  object *all_wizards, snooping;

  int i, val, j;

  string idle_time;



  if (str && str!=NULL)

  {

    notify_fail("��ȷ��ʹ�÷���: wizards\n");

    return 0;

  }

  all_wizards = filter_array(users(), "filter_wizards", this_object());

  all_wizards = sort_array(all_wizards, "sort_wizards", this_object());

  write("--==--==--==--==--==--==--==--==--==--==--==--==--==--==--==--==--\n");

  write("                Ŀǰ���� "+ sizeof(all_wizards) + " ����ʦ������\n");

  write("--==--==--==--==--==--==--==--==--==--==--==--==--==--==--==--==--\n");

  for (i=0; i<sizeof(all_wizards); i++)

  {

    write(all_wizards[i]->query("short") );

    snooping=query_snooping(all_wizards[i]);

    if(snooping!=NULL)

    {

      write("  �������� : ");

     // for(j=0; j<sizeof(snooping); j++)

    //  {

        write(snooping->query("id")+",");

     // }

    }

    val = query_idle( all_wizards[i] );

    if (val >= 3600)

      idle_time = " [��͵���� "+ val/3600 + " Сʱ]";

    if (val >= 60)

      idle_time = " [��͵���� "+ val/3600 + " Сʱ]";

    if (val >= 60)

      idle_time = " [��͵���� "+ val/60 + " ����]";

    else

    {

      idle_time = "";

      write(idle_time+"\n");

    }

  }

  write("--==--==--==--==--==--==--==--==--==--==--==--==--==--==--==--==--\n");

  return 1;

}



int filter_wizards(object ob)

{

  return (wizardp(ob));

}



int sort_wizards(object ob1, object ob2)

{

  if (((int)ob1->query_level() - (int)ob2->query_level()) != 0 )

  return ((int)ob2->query_level() - (int)ob1->query_level());

  return strcmp((string)ob2->query("name"), (string)ob1->query("name"));

}





int help(string str)

{

  if (str!="cloak") return 0;

write(@Help

  �����ʹ�����µļ�������:

       % ϵͳָ�� : localcmd,stat,

       mess <��Ҫ�ͳ���ѶϢ>.....< ������ shout >

       mes  <��Ҫ�ͳ���ѶϢ>.....< ������ shout >

       sh   <��Ҫ�ͳ���ѶϢ>.....< ����� shout >

       low  <��Ҫ�ͳ���ѶϢ>.....< �޹��� shout >

       smi  <��Ҫ�ͳ���ѶϢ>.....< ��Ƥ�� shout >

       vend <number> <type>.....<ȡ������Ǯ�ҵĶ�����Ŀ>

       rem <eqs> from <object>....<��ĳһ object ���װ��>

       getobj <object> from <object>....<��ĳ��һ�object������ĳ������>

       back <object> to <object>...<��ĳһ object ��һ object>

       whereis <���>...........<��ʾһ��ҵ����ڵ�>

       Mob <Object>.............<��ʾһ mob �� weapon �ĵ���>

       Morei....................<��ʾ�����ڵصĵ���>

       Morep <���>.............<��ʾ������ڵصĵ���>

       Full <���>..............<����. ����. ̸������ȫ��, ��������������ڶ�Ϊ�Լ�>

       Wiz <ѶϢ>...............<�����������ϵ���ʦ��ѶϢ>

       Wizs..................<�г�Ŀǰ�����ϵ�������ʦ>

Help

);

  return 1;

}



int vend(string arg)

{

   string type ;

   int number ;

   object obj ;



   seteuid(getuid(this_object()));

   if (sscanf(arg,"%d %s",number,type) != 2)

   {

     notify_fail ("����: vend <number of coins> <type of coin>\n") ;

     return 0 ;

   }

   if (number<1)

   {

     write ("ɶ?..Ǯ����Ŀ�����и���?...�㻹�����!\n") ;

     return 1 ;

   }

   obj = clone_object("/std/coins") ;

   obj->set_type(type) ;

   obj->set_number(number) ;

   obj->move(environment(this_player())) ;

   write ("������������ȡ��"+number+" "+type+" ��Ǯ��\n") ;

   say (this_player()->query("cap_name")+"�����Ĵ�ħ��ʿ������ȡ��"+number+" "+type+" ��Ǯ����, �������Ƕ��ڵ���\n") ;

   return 1 ;

}



int message(string str)

{

   if ((!str) || (str == " "))

   {

      notify_fail(" ����˵ɶ??\n");

      return 0;

   }
   write(GRN+"�������˵: "+NOR +HIC+ str +NOR+ "\n") ;

   shout(GRN+this_player()->query("chi_name")+" ����������쳹����:"+
         NOR+HIC+ str +NOR+ "\n");
   return 1 ;

}


int message1(string str) {
   if ((!str) || (str == " "))
   {
      notify_fail(" ����˵ɶ??\n");
      return 0;
   }
   write(GRN+"�㼤���ĺ�:"+NOR +HIC+ str +NOR+ "\n");
   shout(GRN+this_player()->query("chi_name")+" �����Ĵ�:"+
         NOR+HIC+ str +NOR+ "\n");
       return 1 ;

}

int message2(string str) {

  if ((!str) || (str == " "))
   {
      notify_fail(" ����˵ɶ??\n");
      return 0;
   }
    write(GRN+"�������˵: "+NOR +HIC+ str +NOR+ "\n") ;
    shout(GRN+this_player()->query("chi_name")+
          " ���������������Ķ���:"+
          NOR+HIC+ str +NOR+ "\n");
   return 1 ;
}

int message3(string str) {

  if ((!str) || (str == " "))
   {
      notify_fail(" ����˵ɶ??\n");
      return 0;
   }
    write(GRN+"���޹���˵: "+NOR +HIC+ str +NOR+ "\n") ;
    shout(GRN+this_player()->query("chi_name")+
          " ¶��һ���޹�������,����ͷ˵:"+
          NOR+HIC+ str +NOR+ "\n");
   return 1 ;
}

int message4(string str) {

  if ((!str) || (str == " "))
   {
      notify_fail(" ����˵ɶ??\n");
      return 0;
   }
    write(GRN+"����ƤЦ����˵: "+NOR +HIC+ str +NOR+ "\n") ;
    shout(GRN+this_player()->query("chi_name")+
          " ��Ƥ�Ķ���˵:"+
          NOR+HIC+ str +NOR+ "\n");
   return 1 ;
}
