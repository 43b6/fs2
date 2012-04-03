inherit ROOM;

string record="ֹͣ¼����", record_file="";

void init ()
{
  add_action ("record", "record");
  add_action ("do_say", "say");
}

int record (string arg)
{
  int write_ok;

  if (!wizardp (this_player()))
    return notify_fail (">> ��ʦ�ſ�¼������\n");
  if (!arg) {
    write (">> Ҫ¼���Ļ��������������ӡ���������������\n");
    write (">> ����¼��״���ǣ�"+ record + "\n");
  }
  else if (arg == "stop")
    record = "ֹͣ¼����";
  else {
    seteuid (ROOT_UID);
    arg = resolve_path(this_player()->query("cwd"), arg);
    write (">> "+ this_player()->query("id")+"��ͼ¼����"+ arg+"\n");
    write_ok = write_file (arg,
        this_player()->query("id")+ " ����¼���ڣ�"+
        (string)ctime (time()) + "\n", 1);
    if (!write_ok)
      return notify_fail (">> ¼��ʧ�ܣ���\n");
    else {
      record_file = arg;
      record = "¼���С�";
    }
  }
  return 1;
}

int do_say (string arg)
{
  if (record == "¼���С�")
    write_file (record_file, this_player()->query("id")+"˵����"+arg+"\n", 0);
  return 0;
}

