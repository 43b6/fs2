// obj:/u/b/bss/bug_record
#include <ansi.h>
inherit ITEM;
inherit F_SAVE;
mapping *records;
private void get_title(string txt,mapping record);
void get_record_text(mapping mail, string str);
void receive_mail(mapping record);
void create()
{
  set_name(HIC"bug�ر���"NOR, ({"bug record","record"}));
  set ("long", "
"HIY"
(1)Ҫ�ر�bug�����,���ñ��������ṩ��(record)����,����bug post
   ��board��,������ʦ���Թ���bug�����������ϳ�,���߷��书,����
   purge
(2)��������record���в��ǻر�bug������,Ҳ����������ʦ������������
   �������ϳ�,����ckillʮ��,����purge
(3)�ڷ����еĹ�������Ҫ�Ǹ���ʦ���Ѵ����δ�����bug���������֪
   ����,���������post���ǰ�����������ʦ����ҵ������,���߸�bug
   ��ȫû��ϵ������,post�����Ҳ�������ϳ�,���߷���,����sleep
(4)�ر���bugһ��ȷ����ʵ֮��,����Ըûر�������Խ���,����ʨ�Ӵ�
   ��,ҪЩgeq,meq����ĺ÷���,�����Ǵ���������Լ�������Ҫ��,��Ȼ
   ���������ϣ����Ϊ��,������ʦ���ǻ���������ر���bug��С,����
   ����Ҫ��ɶ�ô�
�б���Ժ��ٲ�.................
"NOR);

  set("light_up", 1);
  set("no_fight", 1);
  set("no_get", 1);
  set("no_sac", 1);
  set("no_put", 1);
  set("no_give", 1);
  set("no_steal", 1);
  set ("save_file", "/data/bug_record");
  setup();
}

string query_save_file() {
  return query ("save_file");
}
void init()
{
  add_action("do_record","record");
  add_action("do_check","check");
  add_action("do_study","dostudy");
  add_action("do_del","dodel");
  restore();
}
int do_record()
{
        object user=this_player();
        mapping record;

        record = ([
                "from": this_player()->name(1) + "(" + this_player()->query("id") + ")",
                "title": "����",
                "time": time(),
                "have_other_use?": "",
                "self_have_use?": "",
                "text": ""
        ]);
        write("������bug����(��xxxx��bug��ֱ�Ӱ�enter�����record):");
        input_to((: get_title :),record);
        return 1;
}
private void get_title(string txt,mapping record)
{
        printf("txt=%s\n",txt);
        if(!txt || txt=="")
        {
                printf("txt=%s\n",txt);
                write("�������record!!\n");
                return ;
        }
        record["title"] = txt;
        write("�ر�����:\n");
        this_player()->edit( (: get_record_text, record :) );
}
void get_record_text(mapping record, string str)
{
        record["text"] = str;
        write("������֪�У�����������֪����ʹ�ù����bug��?(y/n)[n]:");
        input_to("confirm_copy", record);
}

void confirm_copy(string yn, mapping record)
{
        if( yn[0]=='y' || yn[0]=='Y' )
                record["have_other_use?"]="yes";
        else
                record["have_other_use?"]="no";
        write ("�������Լ����ù����bug��(y/n) ? [n]");
        input_to ("confirm_other", record);
}
void confirm_other(string yn, mapping record)
{
        if ( yn[0]=='y' || yn[0]=='Y' )
                record["self_have_use?"]="yes";
        else
                record["self_have_use?"]="no";
        write("��л��ر�bug,�з���������bug,��ӭ��ʱ�����ر�!!\n");
        receive_mail(record);
}
void receive_mail(mapping record)
{
        if( !pointerp(records) ) records = ({ record });
        else records += ({ record });
        save();
}
int do_check()
{
  int i;

  object user=this_player();
  if(!wizardp(user)) return 0;

  if( !pointerp(records) || !sizeof(records) ) {
    write("Ŀǰ�ر���û���κε����¡�\n");
    return 1;
  }

  write ("�ر���Ŀǰ���� " + sizeof(records) + " ƪ���£�\n");
  write ("### ����=========================================================\n");
  for(i=0; i<sizeof(records); i++) {
    printf("%3d %s\n\t�ر��ˣ�%s, %s(%d ��)\n",
      i+1,
      records[i]["title"],
      records[i]["from"],
      ctime (records[i]["time"]),
      strlen (records[i]["text"])
    );
  }
    write("\n");
    return 1;
}
int do_study(string arg)
{
        int num;
  object user=this_player();
  if(!wizardp(user)) return 0;

        if( !arg || !sscanf(arg, "%d", num) )
                return notify_fail("��Ҫ����һƪ���£�\n");

        if( !pointerp(records) || num < 1 || num > sizeof(records) )
                return notify_fail("û�������ŵ����¡�\n");

        num --;

        printf("���⣺%s\n�� �� �ˣ�%s\n",
                records[num]["title"], records[num]["from"]);
        printf("have_other_use?:%s\n",records[num]["have_other_use?"]);
        printf("self_have_use?:%s\n\n",records[num]["self_have_use?"]);
        printf("����:\n%s\n",records[num]["text"]);
        return 1;
}
int do_del(string arg)
{
        int num;
  object user=this_player();
  if(!wizardp(user)) return 0;

        if( !arg || !sscanf(arg, "%d", num) )
                return notify_fail("��Ҫɾ����һƪ���£�\n");

        if( !pointerp(records) || num > sizeof(records) )
                return notify_fail("û�������ŵ����¡�\n");

        num --;

        records = records[0..num-1] + records[num+1..sizeof(records)-1];
        save();
        write("Ok.\n");

        return 1;
}
