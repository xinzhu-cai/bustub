//===----------------------------------------------------------------------===//
//
//                         BusTub
//
// seq_scan_executor.cpp
//
// Identification: src/execution/seq_scan_executor.cpp
//
// Copyright (c) 2015-19, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#pragma once
#include "execution/executors/seq_scan_executor.h"

namespace bustub {

SeqScanExecutor::SeqScanExecutor(ExecutorContext *exec_ctx, const SeqScanPlanNode *plan) : AbstractExecutor(exec_ctx) {}

void SeqScanExecutor::Init() {}

bool SeqScanExecutor::Next(Tuple *tuple) { return false; }

const Schema *SeqScanExecutor::GetOutputSchema() { return plan_->OutputSchema(); }

}  // namespace bustub
