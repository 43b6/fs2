//shop.c by chun 1995.10.19
//Modify By AceLan 99.8.1  ��д�ɰ��� eq �ҵ�ģʽ...

#include <ansi.h>
#include <room.h>

inherit ROOM;
inherit CHINESE_D;
inherit F_FINANCE;
inherit F_MORE;

mapping sells = ([ ]);		//      sells[id] = short();
mapping item_type = ([ ]);    	//      item_type[id] = skill_type or armor_type
mapping c_name = ([ ]);	//      c_name[id] = player()->query("name");
mapping names = ([ ]); 	//      names[id] = file_name(id);
mapping player = ([ ]);          //      player[id] = player()->query("id");
mapping tradename = ([ ]);  //      tradename[id] = id;
mapping unit = ([ ]);		//      unit[id] = ob->query("unit")
mapping num = ([ ]);		//      number

void do_more(object me, string cmd , int line );
int put_ob(object ob);
int put_all();

void create()
{
  set("no_clean_up",1);
}

void init()
{
  add_action("do_put","put");
  add_action("do_get","take");
  add_action("do_list","list");
}

void get_thing(string arg)
{
  if( num[ arg] == 1)
  {
    map_delete( tradename , arg );
    map_delete( item_type , arg );
    map_delete( sells , arg );
    map_delete( names , arg );
    map_delete( c_name , arg );
    map_delete( player , arg );
    map_delete( unit , arg );
    map_delete( num, arg );
  }
  else
    num[ arg]= num[ arg]- 1;
}


int do_put(string arg)
{
  object ob, me=this_player();
  int index=1;

  if( !arg )
    return notify_fail("��Ҫ��ʲô�������������Ĺ�̨С��ڣ�\n");

  if (arg == "all") return put_all();

  // �����������ڶ�����Ʒ, good ����
  if (sscanf (arg, "%s %d", arg, index) == 2)
    if (index < 1) index = 1;

  if( !(ob = present(arg+" "+index, me)) )
    return notify_fail("ʲô...��Ҫ���Լ����������Ĺ�̨С�㣿\n");

  if (!put_ob( ob))
    write ("�������̫����ˣ������Ĺ�̨С�㲻���ա�\n");
  else
    write ("�����Ĺ�̨С�㽫�㽻�����Ķ������ű�����պ��ˡ�\n");
  return 1;
}

int put_all()
{
  object *inv;
  int    i;

  inv = all_inventory(this_player());
  for (i=0; i<sizeof(inv); i++)
    put_ob( inv[i]);

  write ("�����Ĺ�̨С�㽫�㽻�����Ķ������ű�����պ��ˡ�\n");
  return 1;
}

int put_ob(object ob)
{
  object me=this_player();
  string arg;
  int valu;

  arg = base_name( ob);
  valu= ob->query("value");

  if( ob->query("no_drop") || ob->query_temp("secured") || ob->query("no_sell") )
    return 0;
  if( ob->query_autoload())
    return 0;
  if (ob->query("money_id"))
    return 0;

  if(!valu){
write ("�����̨��"+ob->query("name")+"��һ���޼�֮���������Ĺ�̨С��ͽ���͵͵������������\n");
  destruct(ob);
  return 1;
  }
  if(!intp(valu)){
  write ("�����̨��"+ob->query("name")+"��һ���޼�֮���������Ĺ�̨С��ͽ���͵͵������������\n");
    destruct(ob);
    return 1;
    }

  if (!valu || valu <= 0) {
    write ("�����̨��"+ob->query("name")+"��һ���޼�֮���������Ĺ�̨С��ͽ���͵͵������������\n");
    destruct(ob);
    return 1;
  }

  message_vision(HIY"$N��"+ob->query("name")+"�͸��������Ĺ�̨С�㡣\n"NOR, me);

// �ĳ��ظ���Ʒ���ᱻ�Ե�...AceLan...98.8.18...
// �˴�Ϊ��Ʒ�ظ�����...
  if( names[arg] == base_name(ob) && sells[arg] == ob->short())
  {
    num[ arg]=num[ arg]+ 1;
  }
// �˲���Ϊԭ��Ʒ���ظ�����...
  else
  {
    player[arg] = me->query("id");
    names[arg] = base_name(ob);
    c_name[arg] = me->query("name");
    sells[arg] = ob->short();
    tradename[arg] = ob->query("id");
    unit[arg] = ob->query("unit");
    num[arg] = 1;

    if( ob->query("armor_type"))
       item_type[arg]= "armor";
    else if( !( item_type[arg]= ob->query("skill_type")))
       item_type[arg]= "item";
  }

  destruct(ob);
  return 1;
}

int do_list(string arg)
{
  string *k;

  printf("�����Ĺ�̨С�����˵:������������µ����������ߣ���������ѡ...\n");

  if( sizeof(k= keys(sells)) != 0 )
     do_more(this_player(), arg, 0);
  else  // �յ�...���㶫����...hoho...
  {
     switch( random( 6))
     {
         case 0:
            printf("%-40s��л ��̨С��(Beauty) ���������ṩ\n", "�����С��");
            break;
         case 1:
            printf("%-40s��л ��̨С��(Beauty) ���������ṩ\n", "������С��");
            break;
         case 2:
            printf("%-40s��л ��̨С�������(Mama) ���������ṩ\n", "������Ůϵ��");
            break;
         case 3:
            printf("%-40s��л ��̨С��(Beauty) ���������ṩ\n", "�ü���������");
            break;
         case 4:
            printf("%-40s��л ��̨С��(Beauty) ���������ṩ\n", "С�ƹ�");
            break;
         case 5:
            printf("%-40s��л С��ͷ(Small Pig) ���������ṩ\n", "����");
            break;
     }
  }
  return 1;
}

int do_get(string arg)
{
  object ob, me=this_player();
  string *k= keys( sells);
  int flag= 0;

  if( !arg )
    return notify_fail("��Ҫ�������Ĺ�̨С����ȡʲô�����ڣ�\n");
// �������ͦ���...
  for( int i= 0; i< sizeof( k); i++)
  {
    if( arg == tradename[k[i]] )
    {
      flag= 1;
      arg= k[i];
      break;
    }
  }
  if( !flag)
    return notify_fail("�����Ĺ�̨С��˵�����װ����Ŀǰ�����ֵģ��Ѿ��������ꆪ...\n");

  ob = new(names[arg]);
  ob->move(me);
  get_thing(arg);
  message_vision("$N�������Ĺ�̨С��Ҫ��һ"+ob->query("unit")+ob->short()+"\n", me);

  return 1;
}

void do_more(object me, string cmd , int line )
{
   int i, j;
   string *k, list="";
   k = keys(sells);

   if( !cmd)
   {
      for(i = line; line<sizeof(k); line++)
      {
         j= num[ k[ line]];
         list += sprintf("%s%-35s��л %s(%s) ���������ṩ\n", 
            j == 1 ? "" : chinese_number(j)+ unit[k[line]], 
            sells[ k[ line]], c_name[ k[ line]], player[ k[ line]]);
      }
   }
   else
   {
      for(i = line; line<sizeof(k); line++)
      {
         j= num[ k[ line]];
         if( item_type[ k[ line]] == cmd )
            list += sprintf("%s%-35s��л %s(%s) ���������ṩ\n", 
            j == 1 ? "" : chinese_number(j)+ unit[k[line]], 
            sells[ k[ line]], c_name[ k[ line]], player[ k[ line]]);
      }
   }
   me->start_more(list);
}
