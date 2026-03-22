#ifndef LOG_FILE_WRITER_H
#define LOG_FILE_WRITER_H

class LogFileWriter {

    private:

        // Contains the name of the file to manage
        std::string _filename;

    public:

        // Constructor
        LogFileWriter(const std::string &filename) : _filename(filename);

        void write_line(const std::string &text);

        // Getters and Setters
        void set_filename(std::string p_filename) { _filename = p_filename; }
        bool get_filename() const { return _filename; }

    };

#endif