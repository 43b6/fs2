// tar 0.1 11/30/1999
// ���������� mud ѹ��һ������
// Ŀǰ��û��ѹ�����ܣ�ֻ�� tar ���ܡ�
// wade@Fantasy.Space

inherit NPC;

string *dirs, *files;   // ���ڻ������ڵ�Ŀ¼, ���ڻ������ڵĵ���
int    ndirs, nfiles;   // �������ڵ�Ŀ¼�뵵��λ��
string  fn;             // tar file name
int     start, tfiles;  // start ָʾ�Ƿ���ѹ��tfiles ָʾѹ�˶��ٵ�

int extract (string sub_dir);

void create()
{
  mixed *get_dirs;
  int   cur;

  set_name( "tar", ({ "tar" }) );
  set("long", "����ѹ����\n");
  set_heart_beat (1);
  dirs = allocate (1000);       // ����һ������Σ���
  files= allocate (1000);
  ndirs = nfiles = start = tfiles = 0;

  // Ҫע�⣬������Ǹ�Ŀ¼��Ҫ������ĸ�ʽ��
  // get_dir ("/obj/.", -1);
  // ��������ȡ�� /obj Ŀ¼���е���������, ����ǣ�
  // get_dir ("/obj", -1);
  // ֻ��ȡ�� /obj �����ϣ�������Ŀ¼�µġ�
  //
  // ��Ŀ¼�Ƚ����⣬��Ҫ�� extract() ������
  get_dirs = get_dir ("/", -1);

  for (cur=0; cur < sizeof (get_dirs); cur++)   // ��������Ŀ¼�ֿ�
  {
    if (get_dirs[cur][1] == -2) {               // ��ЩĿ¼��Ҫѹ
      if (get_dirs[cur][0] != "tmp" &&
          get_dirs[cur][0] != "log" &&
          get_dirs[cur][0] != "ftp" &&
          get_dirs[cur][0] != "bin")
      {
        dirs[ndirs++] = "/" + get_dirs[cur][0] + "/";   // Ŀ¼������б��
      }                                                 // �Ӹ�Ŀ¼��ʼ
    }
    else
      files[nfiles++] = "/" + get_dirs[cur][0];
  }
  write ("�Ѿ��У�"+nfiles+"/"+ndirs+" �ڻ������С�\n");

  setup();
}

// �趨����������رգ�����ʱ�趨����
void init ()
{
  add_action ("tar", "tar");
  add_action ("stoptar", "stoptar");
}

// ����ǽ� sub_dir Ŀ¼�µĵ����ֳ� dirs, �� files
int extract (string sub_dir)
{
  mixed *get_dirs;
  int   cur;
 
  ndirs--;      // �ٸ���ǰ��һ����˵��

  // Ҫע�⣬������Ǹ�Ŀ¼��Ҫ������ĸ�ʽ��
  // get_dir ("/obj/.", -1);
  // ��������ȡ�� /obj Ŀ¼���е���������, ����ǣ�
  // get_dir ("/obj", -1);
  // ֻ��ȡ�� /obj �����ϣ�������Ŀ¼�µġ�
  get_dirs = get_dir (sub_dir, -1);

  if (sizeof (get_dirs) > 0)    // ���ǿ�Ŀ¼ѹ������˼
    for (cur=0; cur < sizeof (get_dirs); cur++) // ��������Ŀ¼�ֿ�
    {
      if (get_dirs[cur][1] == -2)                       // ��ЩĿ¼��Ҫѹ
        dirs[ndirs++] = sub_dir + get_dirs[cur][0] + "/";// Ŀ¼������б��
      else
        files[nfiles++] = sub_dir + get_dirs[cur][0];
    }
  return 1;
}

// ������ʱ��tar /fs.tar      ������ѹ�ɸõ��ĵ���
// �Լ�Ҫע��ѹ�����ǲ����Ѿ����ˣ���Ҫ��ѹ��ȥ��
int tar (string arg)
{
  if (!arg) {   // ������ѯ���ж���û���С�
    if (start) {
      write ("���У�"+nfiles+"/"+ndirs+" �ڻ������С�\n");
    }
    else
      write ("�﷨��tar tar_file_name  --> tar /mud.tar\n");
    return 1;
  }

  if (!start) { // ���ѿ�ʼ���Ͳ�Ҫ�����ˡ�
    fn = arg;
    // rm (fn); // �Ѵ��ڵĻ����͸���������ҿ������ֶ�����ˡ�
    start = 1;
  }
  write ("ѹ���С���\n");
  return 1;
}

int stoptar (string arg)
{
  if (start) start = 0;
  write ("ֹͣѹ����\n");
  return 1;
}

void heart_beat()
{
  string buf;
  string        *tmp_buf;       // Ϊ�˴�����������ǵ�����С
  int           ln;             // # of lines in a file.

  if (start) {
    if (nfiles > 0) {     // ��ʾ���е�����ûѹ��
      if (files[nfiles-1] != fn) {      // ����ѹ�Լ��ɣ�
        buf = read_file (files[nfiles-1]);      // �ǵã�ָ���λ�á�
        if (sizeof (buf) > 0) {// ��Ҫ���յ�����
          tmp_buf = explode (buf, "\n");
          // �ǵ��Ȱѵ������ȥ
          write_file (fn, files[nfiles-1]+"\n"+sizeof (tmp_buf) + "\n"+ buf);
        }
        nfiles--;               // ������Σ���Ҫ�������ٵ��
      }
    }
    else if (ndirs > 0) {       // �Ѿ�ѹ���ˣ����ٴ�Ŀ¼�ж���Ҫѹ�ĵ�������
      extract (dirs [ndirs-1]);
    }
    else {
      start = 0;
    }
    write ("���У�"+nfiles+"/"+ndirs+" �ڻ������С�\n");
  }
}
